//. Display all prime factors of à givan number. 


#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);

    int i,j,isprime;

    printf("the prime factor of %d are :",a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            isprime= 1;
            for (j= 2; j < i; j++)
            {
               if(i%j == 0)
               {
                  isprime= 0;
                  break;
               }
              
               
            }
            if(isprime)
            printf(" %d ",i);
            
        }
    }
   
    return 0;
}