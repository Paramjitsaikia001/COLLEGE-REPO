// write a program to take a number k and split the linked list after kth position

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// create a node
void createLL(struct node **start)
{
    int item;
    printf("enter the data:");
    scanf("%d", &item);
    struct node *temp = *start;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation is failed.\n");
        return;
    }
    if (*start == NULL)
    {

        newnode->data = item;
        *start = newnode;
        newnode->next = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->data = item;
        newnode->next = NULL;
    }
}

// print the lineked list
void printDLL(struct node *start)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// split in position k
void split_position(struct node **start)
{
    int k;
    printf("enter the position,from where you want to split: ");
    scanf("%d", &k);
    struct node *temp = *start;
    for (int i = 0; temp != NULL && i < k - 1; i++)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    // for (int i = k; temp != NULL && i>0; i--)
    // {
    //     printf(" %d ", temp->data);
    //     temp = temp->next;
    // }
    struct node *second=NULL;
    second=temp;
    printDLL(second);
}

int main()
{
    struct node *start = NULL;
    createLL(&start);
    createLL(&start);
    createLL(&start);
    createLL(&start);
    createLL(&start);
    printDLL(start);
    split_position(&start);
}