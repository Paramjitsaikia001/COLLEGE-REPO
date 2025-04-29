// implementation of queue using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *NEXT;
};

struct node *front=NULL, *roar=NULL;

// insertion at the end
void Insert()
{
    int value;
    printf("enter element:");
    scanf("%d", &value);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation failed,\n");
        return;
    }

    if (front == NULL)
    {
        front = newnode;
         roar = newnode;
        newnode->data = value;
        newnode->NEXT = NULL;
        return;
    }
    roar->NEXT = newnode;
    roar=newnode;
    newnode->data = value;
    newnode->NEXT = NULL;
}

//deletion
void deleteQ(){
    if(front==NULL){
        printf("queue is empty.\n");
        return;
    }
    printf("\n you deleted %d",front->data);
    front=front->NEXT;
}

// display
void print()
{
    struct node *i = front;
    while(i!=NULL)
    {
        printf(" %d ", i->data);
        i=i->NEXT;
    }
    printf("\n");
}

int main()
{
    struct node *Q = NULL;
    Insert();
    Insert();
    Insert();
    Insert();
    Insert();
    Insert();
    printf("\n after  insertion: ");
    print();
deleteQ();
printf("\nafter deletion: ");
print();
    return 0;
}