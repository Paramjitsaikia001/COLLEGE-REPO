// concatenate two linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *NEXT;
};

void LL(struct node **START)
{
    int item;
    struct node *temp = *START;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("first linked list memory allocation is failed.\n");
        return;
    }
    printf("enter the items:");
    scanf("%d", &item);
    if (*START == NULL)
    {
        newnode->data = item;
        *START = newnode;
        newnode->NEXT = NULL;
    }
    else
    {
        while (temp->NEXT != NULL)

        {
            temp = temp->NEXT;
        }
        newnode->data = item;
        temp->NEXT = newnode;
        newnode->NEXT = NULL;
    }
}

// concatenate two linkedlist
void con_LL(struct node **FIRST, struct node **SECOND)
{
    if(*FIRST==NULL){
        *FIRST=*SECOND;
        return ;
    }
    struct node *temp = *FIRST;
    while (temp->NEXT != NULL)
    {
        temp = temp->NEXT;
    }
    temp->NEXT = *SECOND;
}

// print an ll
void printLL(struct node *START)
{
    struct node *temp = START;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->NEXT;
    }
}

int main()
{
    struct node *START = NULL;
    int size;
    printf("enter the size first of the ll:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        LL(&START);
    }
    printLL(START);

    struct node *second = NULL;
    int size2;
    printf("\nenter the size second of the ll:");
    scanf("%d", &size2);
    for (int i = 0; i < size2; i++)
    {
        LL(&second);
    }
    printLL(second);
    con_LL(&START, &second);
    printf("\nafter concatenate:");
    printLL(START);
    return 0;
}