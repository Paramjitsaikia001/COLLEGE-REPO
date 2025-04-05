// write a program to merge two sorted linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *NEXT;
};

void createLL(struct node **start)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation is failed.\n");
        return;
    }
    int item;
    printf("enter the data:");
    scanf("%d", &item);

    struct node *temp = *start;
    if (*start == NULL)
    {
        newnode->data = item;
        *start = newnode;
        newnode->NEXT = NULL;
    }
    else
    {
        while (temp->NEXT != NULL)
        {
            temp = temp->NEXT;
        }
        temp->NEXT = newnode;
        newnode->data = item;
        newnode->NEXT = NULL;
    }
}

// merging
void mergeLL(struct node **first, struct node **second)
{
    struct node *temp = *first;
    if (*first == NULL)
    {
        *first = *second;
        return;
    }
    while (temp->NEXT != NULL)
    {
        temp = temp->NEXT;
    }
    temp->NEXT = *second;
}

// for sorting
void sortLL(struct node **first)
{
    struct node *temp = *first;
    if (*first == NULL)
    {
        return;
    }

    struct node *i, *j;
    int t;
    for (i = temp; i != NULL; i = i->NEXT)
    {
        for (j = i->NEXT; j != NULL; j = j->NEXT)
        {
            if (i->data > j->data)
            {
                t = i->data;
                i->data = j->data;
                j->data = t;
            }
        }
    }
}

// printing
void printLL(struct node *first)
{
    struct node *temp = first;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->NEXT;
    }
    printf("\n");
}

int main()
{
    struct node *start = NULL;
    int size;
    printf("\nenter the size of first linked list:");
    scanf("%d", &size);
    printf("\nenter the elements of first ll :\n");
    for (int i = 0; i < size; i++)
    {
        createLL(&start);
    }
    printf("first ll:");
    printLL(start);

    printf("sorting of first ll :");
    sortLL(&start);
    printLL(start);

    struct node *second = NULL;
    int size2;
    printf("\nenter the size of second linked list:");
    scanf("%d", &size2);
    printf("\nenter the elements of second ll :\n");
    for (int i = 0; i < size2; i++)
    {
        createLL(&second);
    }
    printf("second ll:");
    printLL(second);

    printf("sorting of second ll :");
    sortLL(&second);
    printLL(second);

    mergeLL(&start, &second);
    printf("merging two linked list:");
    printLL(start);

    printf("\nafter sorting the merge linked list:");
    sortLL(&start);
    printLL(start);
    return 0;
}