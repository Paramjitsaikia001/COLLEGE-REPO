#include <stdio.h>
int main()
{
    char ch;
    float a, b, result;
    printf("enter the first number: ");
    scanf("%f", &a);
    printf("Enter the operator(+,-,*,/, %): ");
    scanf(" %c", &ch);

    if (ch == '+')
    {
        printf("enter the second number: ");
        scanf("%f", &b);
        result = a + b;
    }
    else if (ch == '-')
    {
        printf("enter the second number: ");
        scanf("%f", &b);
        result = a - b;
    }
    else if (ch == '*')
    {
        printf("enter the second number: ");
        scanf("%f", &b);
        result = a * b;
    }
    else if (ch == '/')
    {
        printf("enter the second number: ");
        scanf("%f", &b);
        result = a / b;
    }
    else if (ch == '%')
    {
        result = a / 100;
    }
    else
    {
        printf("you entered wrong operaator");
    }
   
    printf(" RESULT = %.2f",result);
     return 1;
}
