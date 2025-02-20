// Write a program that allocates memory for an array of integers using malloc(). The program should prompt the user to enter the number of elements, then read those elements, and finally print them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, arr[n], *ptr;
   printf("enter the size of the array: ");
   scanf("%d", &n);
   ptr = (int *)malloc(n * sizeof(int));
   printf("enter the element of the array:");
   for (int i = 0; i < n; i++)
   {
      scanf("%d", ptr + i);
   }
   printf(" The array is : ");
    for (int i = 0; i < n; i++)
   {
      printf(" %d ",*( ptr + i));
   }
   free(ptr);
   return 0;
}