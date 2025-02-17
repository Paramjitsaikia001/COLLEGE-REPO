#include<stdio.h>
#define MAX_SIZE 100

int main(){
int arr[MAX_SIZE];
int size,element;
printf("enter the size of the array: ");
scanf("%d",&size);

printf("enter the element of the array: ");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

printf("enter the element that insert in array : ");
scanf("%d",&element);

arr[size]=element;
size++;

printf("the final array is : ");
for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
}
return 0;
}

