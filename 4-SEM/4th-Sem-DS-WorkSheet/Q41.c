// write the program  to evaluate a simple postfix expression using stack

#include <stdio.h>
#include <math.h>
int is_operator(char ch)
{
   if (ch == '+' || ch == '*' || ch == '/' || ch == '^')
      return 1;
   else
      return 0;
}
int main()
{
   int MAX_SIZE = 20, i = 0, pop = 0;
   char Postfix[MAX_SIZE], ch;
   float Result[MAX_SIZE], val1, val2, res;
   printf("enter the postfix expression : ");
   scanf("%s", &Postfix);
   printf("Your Postfix expression is : %s \n", Postfix);

   while ((ch = Postfix[i]) != '\0')
   {
      if (is_operator(ch) == 1)
      {
         val1 = Result[--pop];
         val2 = Result[--pop];
         switch (ch)
         {
         case '+':
         {

            res = val1 + val2;
            break;
         }
         case '*':
         {
            res = val1 * val2;
            break;
         }
         case '/':
         {
            res = val1 / val2;
            break;
         }
         case '^':
         {
            res = pow(val1, val2);
            break;
         }
         }
         Result[pop] = res;
      }
      else
      {
         Result[pop] = ch-'0';
      }
      pop++;
      i++;
   }
   printf("%.2f",Result[0]);
   return 0;
}