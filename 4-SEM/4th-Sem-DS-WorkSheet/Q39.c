// Write a program to implement stack using array. Use push and pop operation on the array representation of the stack.check is full or empty

#include <stdio.h>
int is_full(int pop, int size)
{
   if (pop >= size)
      return 1;
   else
      return 0;
}
int is_empty(int pop, int size)
{
   if (pop == -1)
   {
      return 1;
   }
   else
      return 0;
}
int main()
{
   int size, pop = -1;
   int arr[size];

   if (is_empty(pop, size))
   {
      printf("array is empty");
   }

   printf("enter the size of the array:");
   scanf("%d", &size);
   printf("enter the element of the array:");
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
      arr[++pop] = arr[i];
   }
   for (pop = 0; pop < size; pop++)
   {
      printf(" %d ", arr[pop]);
   }
   return 0;
}