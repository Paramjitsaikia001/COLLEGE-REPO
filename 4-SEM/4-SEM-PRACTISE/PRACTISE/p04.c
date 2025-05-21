#include <stdio.h>
int largest(int *arr, int size)
{
   int max = arr[0];
   for (int i = 1; i < size; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }
   return max;
}
int main()
{
   int arr[5] = {3, 34, 4, 6, 23};
   printf("the largest is %d", largest(arr, 5));
   return 0;
}