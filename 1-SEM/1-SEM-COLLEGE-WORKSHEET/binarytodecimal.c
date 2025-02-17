#include<stdio.h>
int main()
{
    int n,r=1,rem=0;
    printf("enter the binary number:");
    scanf("%d",&n);

    while (n!=0)
    {
          rem+=n%10*r;
          r=2*r;
          n=n/10;
    }
    printf("%d",rem);
    
}