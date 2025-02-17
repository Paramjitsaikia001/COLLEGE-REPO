//s=1+1/2+1/3+1/4......
#include<stdio.h>
int main()
{
    int n;
    printf("enter the terms of the series:");
    scanf("%d",&n);
    float s=1.0;
    for(int i=n-1;i>1;i--)
    {
        s=s+1.0/i;
    }
    printf("%f",s);
    return 1;
}