//Print the evenvalued elements

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
    printf("the evenvlue of array:");
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if (arr[j]==arr[k])
            {
            for(int l=k;l<n-1;l++)
        {
            arr[l]=arr[l+1];
        }
            }
            

        }
    
        if(arr[j]%2!=0)
        {
            printf(" %d ",arr[j]);
        }
        n--;
        k--;
    }
    return 1;

}