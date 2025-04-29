// spliting doubly linkd list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *LEFT;
    struct node *RIGHT;
};

void printDLL(struct node *START);

// insertion
void Insert(struct node **START)
{
    int value;
    printf("Enter the value where you want to insert :");
    scanf("%d", &value);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation failed.\n");
        return;
    }
    if (*START == NULL)
    {
        newnode->data = value;
        *START = newnode;
        newnode->LEFT = *START;
        newnode->RIGHT = NULL;
        return;
    }
    struct node *temp = *START;
    while (temp->RIGHT != NULL)
    {
        temp = temp->RIGHT;
    }
    newnode->data = value;
    temp->RIGHT = newnode;
    newnode->LEFT = temp;
    newnode->RIGHT = NULL;
}

// spliting
void Split(struct node **START, int position)
{
    struct node *SplitLinked = NULL;
    int counter = 1;
    struct node *i;
    struct node *temp = *START;
    while (temp->RIGHT != NULL && counter < position)
    {
        temp = temp->RIGHT;
        counter++;
    }
    printf("\n");
    if (temp == NULL)
    {
        printf("position is invalid! .\n");
        return;
    }
    SplitLinked = temp;
    temp->LEFT->RIGHT = NULL;
    temp->LEFT = SplitLinked;
printDLL(*START);
    printDLL(SplitLinked);
}

// print
void printDLL(struct node *STR)
{
    struct node *temp = STR;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->RIGHT;
    }
    printf("\n");
}

int main()
{
    struct node *DOUBLY = NULL;
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    Insert(&DOUBLY);
    printDLL(DOUBLY);
    printf("after spliting:\n");
Split(&DOUBLY,2);
}