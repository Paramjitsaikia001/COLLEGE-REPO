#include<stdio.h>
int main()
{
    int n,arr[n];

    printf("enter the size of the number :");
    scanf("%d",&n);

    int i;

    for(i=0;i<n;i++)
    {
        printf("enter the number of element n=%d :",i);
        scanf("%d",&arr[i]);
    }

    int j,k;
    for(j=0;j<n;j++)
    {
        int frequency=0;
        for(k=0;k<n;k++)
        {
            if(arr[j]==arr[k])
            frequency++;
        }
        printf("%d:%d\n",arr[j],frequency);
    }
    return 1;
}