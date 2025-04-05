// Write a program to implement queue using array. Add new elements to the queue and
// remove elements from the queue represented by array. Check whether the queue is full or
// empty.

#include <stdio.h>
#define MAX 20

int front = -1, roar = -1;
int arr[MAX];

//isempty
int isempty(){
    return (front ==-1||front >roar);
}

//isfull
int isfull(){
    return (roar==MAX-1);
}
// enqueue
void add()
{
    int item;
    printf("enter the element :");
    scanf("%d", &item);
    if (isfull())
    {
        printf("the queue is full .\n");
        return;
    }
    if (front == -1)
        front = 0;
    arr[++roar] = item;
}

// dequeue
void rm()
{
    if (isempty())
    {
        printf("the queue is empty.\n");
        return ;
    }
    printf("you remove %d \n", arr[front]);
    front++;
    if (front > roar) // Reset the queue when it becomes empty
    {
        front = -1;
        roar = -1;
    }
}

// print
void print()
{
    for(int i=front ;i<=roar;i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    if(size >=MAX){
        printf(" you cross your limit ,\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        add();
    }
    printf("\n your queue:");
    print();
    rm();
    print();
    return 0;
}