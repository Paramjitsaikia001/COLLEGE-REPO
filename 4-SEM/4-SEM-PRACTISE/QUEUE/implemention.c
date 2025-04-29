// insertion in queue

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int front = -1, roar = -1;
int arr[MAX];

int isempty()
{
    return front > roar;
}

int isfull()
{
    return roar == MAX;
}

//insertion
void insertAtEnd(int item)
{
    if (isfull())
    {
        printf("queue if full.\n");
        return;
    }
    if (front == -1)
        front++;
    arr[++roar] = item;
}


//deletion
void deleteQ(){
    if(isempty()){
        printf("\n Queue is empty\n");
        return;
    }
    printf("you deleted %d \n",arr[front]);
    front++;
}
void display()
{
    for (int i = front; i <= roar; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    insertAtEnd(3);
    insertAtEnd(2);
    insertAtEnd(5);
    insertAtEnd(1);
    printf("\ninsert 4 element: ");
    display();
    deleteQ();
    deleteQ();
    deleteQ();
    deleteQ();
    printf("\ndelete 1 element :");
    display();

    return 0;
}