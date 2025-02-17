//1-2+3-4+5....
#include<stdio.h>
int  main()
{
    int n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    int count=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        
        if(i%2==0)
        {
            sum-=i;
        }
        else
        sum=sum+i;
    }
    printf("%d",sum);
    return 1;
}