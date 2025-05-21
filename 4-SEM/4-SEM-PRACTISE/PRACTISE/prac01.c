// queue implementation using linked list 

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * NEXT;
};

struct node *front=NULL;
struct node *roar=NULL;


//insert at start and start the queue
void insert_at_start(int item){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory allocation is failed.");
        return;
    }
   if(front==NULL){
    front=newnode;
    roar=newnode;
    newnode->data=item;
    newnode->NEXT=NULL;
    return;
   }
   roar->NEXT=newnode;
   roar=newnode;
   newnode->data=item;
   newnode->NEXT=NULL;
}


//deletion
void del_end(){
    if(front==roar){
        printf("Queue is full .\n");
        return;
    }
    front =front->NEXT;
}

//print queue
void printQ(){
    struct node *i=front;
   while(i!=NULL){
    printf(" %d ",i->data);
    i=i->NEXT;
   }
   printf("\n");
}

int main(){
    insert_at_start(4);
    insert_at_start(3);
    insert_at_start(2);
    insert_at_start(1);
    del_end();
    printQ();

    return 0;
}