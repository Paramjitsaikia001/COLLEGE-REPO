/*Implement linked list in a program by writing functions for the following:
a. Create a singly linked list of a nodes
b. Count the number of nodes in the list
c. Print the values of all the nodes
d. Add a node at first, last and k" position in the linked list
e.Delete a node from first ,last and kth position
f. search for and element in the list . if found,reture the position of the node,if not found return a negative value*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *NEXT;
};

// add at first
void add_at_first(struct node **START, int item)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("Memory allocation failed .\n");
        return;
    }
    new->data = item;
    new->NEXT = *START;
    *START = new;
}

// add at last
void add_at_last(struct node **START, int item)
{
    struct node *new;
    struct node *temp = *START;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("memory allocation failed .\n");
        return;
    }

    if ((*START) == NULL)
    {
        new->data = item;
        new->NEXT = NULL;
        *START = new;
    }
    else
    {
        while (temp->NEXT != NULL)
        {
            temp = temp->NEXT;
        }
        new->data = item;
        temp->NEXT = new;
        new->NEXT = NULL;
    }
}

// add at k th position
void at_position(struct node **START, int item, int position)
{
    struct node *new;
    struct node *temp = *START;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("the memory allocation is failed .\n");
        return;
    }
    if (position == 0)
    {
        new->data = item;
        new->NEXT = NULL;
        *START = new;
    }
    else
    {
        for (int i = 0; temp != NULL && i < position - 1; i++)
        {
            temp = temp->NEXT;
        }
        if (temp == NULL)
        {
            printf("the position is not exists.\n");
            return;
        }
        new->data = item;
        new->NEXT = temp->NEXT;
        temp->NEXT = new;
    }
}

// delete a node from first
void del_at_fist(struct node **START)
{
    struct node *temp = *START;
    if (*START == NULL)
    {
        printf("the struct is already null\n");
        return;
    }
    *START = temp->NEXT;
    free(temp);
}

// delete a node from the end
void del_at_end(struct node **START)
{
    struct node *temp = *START;
    if (*START == NULL)
    {
        printf("the struct is already null\n");
        return;
    }
    while (temp->NEXT->NEXT != NULL)
    {
        temp = temp->NEXT;
    }
    temp->NEXT = NULL;
    free(temp->NEXT);
}

// delete at kth position
void del_position(struct node **START, int position)
{
    struct node *temp = *START;
    if (*START == NULL)
    {
        printf("the struct is already null\n");
        return;
    }
    if (position == 0)
    {
        *START = temp->NEXT;
        free(temp);
        return ;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->NEXT;
    }
    if (temp == NULL)
    {
        printf("position is not exist in the linked list \n");
        return;
    }
    struct node *delete=temp->NEXT;
    temp->NEXT = temp->NEXT->NEXT;
    free(delete);
}

//search a element in the linked list
void search(struct node** START,int item){
    struct node *temp =*START;
    int counter=0;
    while(temp!=NULL){
        if(temp->data==item){
            printf("\nthe %d is in the position %d \n",item,counter);
            return ;
        }
        temp=temp->NEXT;
        counter++;
    }
    printf("\nthe element is not exist\n");
}

// print LL
void PrintLL(struct node *START)
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

    struct node *new = NULL;
    add_at_first(&new, 8);
    add_at_first(&new, 4);
    add_at_first(&new, 5);
    add_at_first(&new, 7);
    add_at_last(&new, 10);
    add_at_last(&new, 1);
    add_at_last(&new, 30);
    add_at_last(&new, 20);
    at_position(&new, 45, 3);
    del_at_fist(&new);
    del_at_end(&new);
    del_at_end(&new);
    del_position(&new,2);
    PrintLL(new);
    search(&new,10);
    return 0;
}