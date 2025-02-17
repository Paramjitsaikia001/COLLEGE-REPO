#include<stdio.h>
int main()
{
    int n,c,a=0,b=1;
    printf("enter the no. of term:");
    scanf("%d",&n);

    int count=0;

    printf("%d terms of fibonacci number : %d %d",n,a,b);
    while(count<n-2)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
        count++;
    }
    return 1;
}