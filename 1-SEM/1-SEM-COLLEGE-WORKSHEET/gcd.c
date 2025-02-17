#include<stdio.h>
int gcd(int a,int b)
{
    if(a<b)
    {
        int t =a;
        a=b;
        b=t;
    }
    if(a%b==0)
    return b;
    else
    return gcd(a%b,b);
}
int main()
{
    int i,a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("enter the value of i:");
    scanf("%d",&i);
    switch(i)
    {

       case 1:  printf("%d",gcd(a,b));
       break;

       case 2: 
       if(a<b)
       {
        int t=a;
        a=b;
        b=t;
       }
       while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
        }
        printf("%d",a);
        break;

        
    }
 return 1;
}