#include <stdio.h>
int binary_to_decimal(int x)
{
    int rem = 0;
    int dec = 1;
    if (x%10 >=2)
    {
        return 1;
    }
    else
    {
        while (x > 0)
        {

            rem += (x % 10)*dec;
            dec*=2;
            x=x/10;
        }
        return rem;
    }
    
}
int main(){
    int x;
    printf("enter the binary number: ");
    scanf("%d",&x);
    // int decimal=binary_to_decimal;
    if(binary_to_decimal(x)!=1){
    printf("the decimal number of %d is  %d",x,binary_to_decimal(x));}
    else {
        printf("it is not a binary number");
    }
}