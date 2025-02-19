// nested class
//  A nested class is a class defined inside another class. Nested classes are useful for logically grouping classes that are closely related.

// Features
// Access:

// A nested class can access private members of the enclosing class.
// The enclosing class must explicitly use an object of the nested class to access its members.
// Encapsulation:

// Provides better encapsulation for helper or utility classes.

#include <iostream>
using namespace std;
class outer
{
public:
   outer()
   {
      cout << "this is outer class"<<endl;
   }
   class inner
   {
   public:
      inner()
      {
         cout << "this is inner class"<<endl;
      }
   };
};
int main()
{
   outer myouter;
   // outer::inner my_inner;
   return 0;
}