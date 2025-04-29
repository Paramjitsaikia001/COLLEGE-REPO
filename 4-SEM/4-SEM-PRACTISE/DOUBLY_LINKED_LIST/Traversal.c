// traversing

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *LEFT;
    struct node *RIGHT;
};

void insert(struct node **START)
{

    int value;
    printf("enter the value:");
    scanf("%d", &value);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation is failed. \n");
        return;
    }
    if (*START == NULL)
    {
        newnode->data = value;
        *START = newnode;
        newnode->LEFT = NULL;
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

void Traversing(struct node *FSTR)
{
    struct node *head = FSTR;
    printf("Traversing forward:");
    while (head != NULL)
    {
     
        printf(" %d ", head->data);
        head = head->RIGHT;
    }
}

void backward(struct node **START)
{
    struct node *tail = *START;
    if(tail==NULL){
        printf("list is empty.\n");
        return;
    }
    while (tail->RIGHT != NULL)
    {
        tail = tail->RIGHT;
    }
    printf("\nBackward traversal:");
while(tail !=NULL){
    printf(" %d ", tail->data);
    tail=tail->LEFT;
}
}

int main()
{
    struct node *Doubly = NULL;
    int n;
    printf("enter size:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        insert(&Doubly);
    }

    Traversing(Doubly);
    backward(&Doubly);
    return 0;
}