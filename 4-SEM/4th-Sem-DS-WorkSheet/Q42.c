// write a program to convert a decimal number into binary number using stack

#include <stdio.h>
int main()
{
   int result[20], pop = -1, n;
   printf("enter the decimal number:");
   scanf("%d", &n);
   for (; n; n = n / 2)
   {
      result[++pop] = n % 2;
   }
   for (; pop >= 0; pop--)
   {
      printf("%d", result[pop]);
   }
   return 0;
}
