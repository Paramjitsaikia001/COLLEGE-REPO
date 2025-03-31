// implementation of double linked list

#include <stdio.h>
#include <stdlib.h>

struct dLinkedList
{
    int data;
    struct dLinkedList *LEFT;
    struct dLinkedList *RIGHT;
};

//create a double linked list
void createDLL(struct dLinkedList **START)
{
     int item;
    struct dLinkedList *temp = *START;
    struct dLinkedList *newnode = (struct dLinkedList *)malloc(sizeof(struct dLinkedList));
    if (newnode == NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    printf("enter the data:");
    scanf("%d",&item);
    if (*START == NULL)
    {
        
        *START = newnode;
        newnode->data = item;
        newnode->LEFT = *START;
        newnode->RIGHT = NULL;
    }
    else
    {
        while (temp ->RIGHT!= NULL)
        {
            temp = temp->RIGHT;
        }
        temp->RIGHT = newnode;
        newnode->data = item;
        newnode->LEFT = temp;
        newnode->RIGHT = NULL;
    }
}

void printDLL(struct dLinkedList *start)
{
    struct dLinkedList *temp = start;
    while (temp != NULL)
    {
        printf("<- %d ->", temp->data);
        temp = temp->RIGHT;
    }
    printf("\n");
}

int main()
{
    struct dLinkedList *node = NULL;
    for (int i = 0; i <= 4; i++)
    {

        createDLL(&node);
    }
    printDLL(node);

    return 0;
}