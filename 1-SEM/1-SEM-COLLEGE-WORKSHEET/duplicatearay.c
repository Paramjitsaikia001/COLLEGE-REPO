#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array:");
    scanf("%d",&n);
	int arr[n];
	int i;
	printf("enter the element of the array:");
	for(i=0;i<n;i++)
	{
 	   scanf("%d",arr[i]);	
	}
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(arr[i]==arr[j])
			{
				for(int l=k;l<n-1;l++)
				{
					arr[l]=arr[l+1];
				}
				
			}
			n--;
			k--;
		}
		printf("final array is: %d",arr[i]);
	}
	return 0;
}