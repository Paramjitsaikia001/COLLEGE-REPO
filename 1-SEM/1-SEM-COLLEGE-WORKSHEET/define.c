#include<stdio.h>
#define SWAP(x,y) {int t=x;x=y;y=t;}
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    SWAP(a,b);
    printf("a=%d\nb=%d",a,b);
    return 0;
}