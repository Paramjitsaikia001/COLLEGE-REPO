/* 14. Write an interactive program to compute square root of a number. The input value must be tested for validity. If it is negative, the user defined function my_sqrt() should raise an exception.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double num;
   cout << "enter the number :";
   cin >> num;
   try
   {
      if (num <= 0)
      {
         throw num;
      }
      else
         cout <<"the square is : "<< sqrt(num) << endl;
   }

   catch (double num)
   {
      cout << " error occurs because the number is negative " << num << endl;
   }
   return 0;
}