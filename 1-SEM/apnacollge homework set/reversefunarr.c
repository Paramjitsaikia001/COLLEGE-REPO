#include <stdio.h>
void revrse_array(int *arr, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
     int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the  array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    revrse_array(arr,n);
    printf("the final array is ");
    for(int i=0;i<n;i++){
        
        printf(" %d ",arr[i]);

    }
       
}