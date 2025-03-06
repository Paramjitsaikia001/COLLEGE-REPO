#include<stdio.h>

int average(int a[],int n){
   int sum =0;
   for(int i=0;i<n;i++){
      sum+=a[i];
   }
   return sum/n;
}

int main(){
int arr[5]={2,4,6,2,10};

//size of array using sizeof operator
int n = sizeof(arr)/sizeof(int);
printf("Average of the array of %d is %d",n,average(arr,n));
return 0;
}