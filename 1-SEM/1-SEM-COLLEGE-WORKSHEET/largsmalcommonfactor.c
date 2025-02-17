//Display largest ard smallest common factor of twoo numbers. 

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);

    int i;

    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        printf("the smallest common factor : %d\n",i);
        break;
    }

    if(a<b)
    {
        for(i=b;i>1;i--)
    {
        if(a%i==0&&b%i==0)
        {
        printf("the largest common factor : %d\n",i);
        break;
        }
    }
    }
    else
    for(i=a;i>1;i--)
    {
        if(a%i==0&&b%i==0)
        {
        printf("the largest common factor : %d\n",i);
        break;
        }
    }
    


    

    return 1;
}