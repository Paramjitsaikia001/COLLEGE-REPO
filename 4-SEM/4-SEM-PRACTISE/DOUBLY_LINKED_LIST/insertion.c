// insertion in doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *LEFT;
    struct node *RIGHT;
};

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

//print
void print(struct node *start){
    struct node *temp=start;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->RIGHT;
    }
    printf("\n");
}

int main(){
    struct node *DOUBLY=NULL;
    int n;
    printf("enter how many element you want: ");
    scanf("%d",&n);
    printf("enter the data :");
    for(int i=0;i<n;i++){
        Insert(&DOUBLY);
    }
    print(DOUBLY);
    Insert(&DOUBLY);
    print(DOUBLY);
}