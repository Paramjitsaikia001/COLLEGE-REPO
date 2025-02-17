// 2.Write a program to implement array intialized with the numbers divisible by three up to 30. Write a function which accepts the array and return the positions of the even numbers in the array

#include <stdio.h>
void EvenPos(int size, int arr[])
{
   for (int i = 0; i < size; i++)
   {
      if (arr[i] % 2 == 0)
      {
         printf("%d th element = %d \n", i,arr[i]);
      }
   }
}
int main()
{
   int arr[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
   EvenPos(10, arr);
   return 0;
}