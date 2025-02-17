#include<stdio.h>
void power(int x,int y)
{
    int i,pow=1;
    if(y==0)
    printf("1");

    else
    for(i=0;i<y;i++)
     {
       pow=x*pow;
     }
   printf(" %d to the power %d is : %d\n\n\n",x,y,pow);
}

//recursive
int powerR(int x,int y)
{
    if(y==0)
    return 1;
    else if(y==1)
    return x;
    else
    return x*powerR( x, y-1);

}

int main()
{
    int a,b;
    printf("enter te lower number ");
    scanf("%d",&a);
    printf("enter the power :");
    scanf("%d",&b);
    power(a,b);

    //recursive
    int x,y;
     printf("enter te lower number ");
    scanf("%d",&x);
    printf("enter the power :");
    scanf("%d",&y);
    printf("%d",powerR(x,y));
}