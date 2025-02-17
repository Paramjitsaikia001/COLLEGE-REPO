//Display all common facIors of two numbers



#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);

    int i;

    printf("common factor of %d and %d is ",a,b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        printf(" %d ",i);
    }
    return 1;
}