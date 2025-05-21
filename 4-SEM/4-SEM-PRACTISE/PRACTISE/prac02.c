//linked list implementation using array

#include<stdio.h>
#define MAX 100
// const MAX=100;
// int arr[MAX];

void createBST(int arr[],int value){
    int i=0;
    while(i<MAX){
    if(arr[i]==-1){
        arr[i]=value;
        return;
    }else if(value<arr[i]){
        i=2*i+1;
    }else if(value>arr[i]){
        i=2*i+2;
    }else
    {
        printf("no duplicy allowed.\n");
        return;
    }
}
}
void inorderBST(int arr[],int i){
   if(i>=MAX || arr[i]==-1)return;
inorderBST( arr,2*i+1);
printf(" %d ",arr[i]);
inorderBST(arr,2*i+2);
}

int main(){
    int size;
    printf("enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    createBST()
}
