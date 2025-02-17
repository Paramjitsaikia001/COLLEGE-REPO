// 1.Write a program to declare an array and initialize the values according to the user.now ask the user for a number n and return nth element from the array.
#include <stdio.h>
int main()
{
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   int arr[size];
   printf("enter the element of the array:");
   for (int i = 0; i < size; i++)
   {

      scanf("%d", &arr[i]);
   }

   int n;
   printf("enter a number in between size: ");
   scanf("%d", &n);

   printf("the %d th element is : %d ", n, arr[n]);

   printf("\n");
   return 0;
}