// write a program to implementation of stack using linkedlist .use push and pop operation on the stack by inserting nodes and deleting nodes from the linked list . also check if the stack is full or empty

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *NEXT;
};

// isempty
int Isempty(struct node *start)
{
    return (start == NULL);
}


// push
void push(struct node **START)
{
    int item;
    printf("enter the item:");
    scanf("%d", &item);
    struct node *temp = *START;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation is failed.\n");
        return;
    }
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
        temp->NEXT = newnode;
        newnode->data = item;
        newnode->NEXT = NULL;
    }
}

// pop
void pop(struct node **START)
{
    struct node *temp = *START;
    if (Isempty(*START))
    {
        printf("you cannot pop .bcz stack is empty.\n");
        return;
    }
    if (temp->NEXT == NULL)
    {
        *START = NULL;
        free(temp);
        return;
    }
    while (temp->NEXT->NEXT != NULL)
    {
        temp = temp->NEXT;
    }
    temp->NEXT = NULL;
    free(temp->NEXT);
}

// print
void printSTACK(struct node *START)
{
    struct node *temp = START;
    if (Isempty(START))
    {
        printf("stack is empty.\n");
    }
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
    printf("how many element you want:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        push(&start);
    }

    printf("after the push:");
    printSTACK(start);

    pop(&start);
    printf("after the pop one element:");
    printSTACK(start);

    int W;
    printf("do you wanna do something more then ,enter the w(1 for pop OR 2 for push) :");
    scanf("%d", &W);
    switch (W)
    {
    case 1:
    {
        pop(&start);
        printf("\nyou successfully pop : ");
        printSTACK(start);
        break;
    }
    case 2:
    {
        push(&start);
        printf("\nyou successfully push : ");
        printSTACK(start);
        break;
    }
    default:
        break;
    }

    return 0;
}