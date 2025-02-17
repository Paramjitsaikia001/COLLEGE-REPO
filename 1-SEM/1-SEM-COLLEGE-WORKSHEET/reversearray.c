#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elment of the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j,k;
	for(j=0,k=n-1;j<k;j++,k--)
	{
		int t=arr[j];
		arr[j]=arr[k];
		arr[k]=t;
	}
	printf("reverse array :");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

	return 0;
	
}