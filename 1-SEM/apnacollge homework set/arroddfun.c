#include<stdio.h>
void count_odd(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the  array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the odd numbers are : ");
    count_odd(arr,n);
}