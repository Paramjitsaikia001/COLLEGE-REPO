#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
     int rev=0;
     while(a>0)
     {
        rev=rev*10+a%10;
        a=a/10;
     }
     printf("reverse is:%d",rev);
     return 1;
}