// Write a program to implement queue using linked list. Add new elements to the queue and
// remove elements from the queue represented by linked list. Also check whether the queue
// is full or empty.

#include <stdio.h>
#include <stdlib.h>
#define MAX 20
struct node
{
    int data;
    struct node *NEXT;
};

struct node *front = NULL;
struct node *roar = NULL;

// isempty
int isempty()
{
    return front == NULL;
}

// enqueue
void add()
{
    int item;
    printf("enter the element:");
    scanf("%d", &item);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation if failed .\n");
        return;
    }
    if (isempty())
    {
        newnode->data = item;
        roar = newnode;
        front = newnode;
        newnode->NEXT = NULL;
    }
    else
    {
        roar->NEXT = newnode;
        newnode->data = item;
        newnode->NEXT = NULL;
        roar = newnode;
    }
}

// dequeue
void rm()
{
    if (isempty())
    {
        printf("queue is empty.\n");
        return;
    }
    front = front->NEXT;
}

// printing
void printQ()
{
    struct node *i;
    for (i = front; i != NULL; i = i->NEXT)
    {
        printf(" %d ", i->data);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("enter the size :");
    scanf("%d", &size);
    if (size == MAX - 1)
    {
        printf("you cross your limit .\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        add();
    }
printf("\n the queue is :");
    printQ();
    rm();
    printf("\nafter remove one element:");
    printQ();
    (isempty()) ? printf("queue is empty.\n") : printf("queue is not empty.\n");
    return 0;
}