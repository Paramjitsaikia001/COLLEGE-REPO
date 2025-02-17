#include<stdio.h>
int search_element(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int target;
printf("enter the target : ");
scanf("%d",&target);
printf("the %d is in %d index",target,search_element(arr,n,target));
}