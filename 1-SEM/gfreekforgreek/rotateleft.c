#include<stdio.h>
void rotate(int arr[],int d,int n){
    int k=0;
    int temp[n];
    for(int i=d;i<n;i++){
        temp[k]=arr[i];
        k++;
    }
for(int i=0;i<d;i++){
    temp[k]=arr[i];
    k++;
}
for(int i=0;i<n;i++){
    arr[i]=temp[i];
}
}
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    int d;
    printf("enter the number of rotation: ");
    scanf("%d",&d);

    rotate(arr ,d,n);
    printf("enter the final array: ");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
return 0;
}