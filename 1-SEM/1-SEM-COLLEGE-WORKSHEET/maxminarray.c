#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,k;
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            for(int l=k+1;l<n;l++)
            {
                if(arr[k]<arr[l])
                {
                    arr[k]=arr[l];
                }
            }
        }
        
    }
    printf("max:%d\n",arr[0]);
    printf("min:%d",arr[n-1]);
}