// binary operator overloading
#include <iostream>
using namespace std;
class complex
{
   double real;
   double imag;

public:
   complex()
   {
      real = imag = 0;
   }
   complex(double a)
   {
      real = imag = a;
   }
   complex(double a, double b)
   {
      real = a;
      imag = b;
   }
   complex operator+(const complex &obj)
   {
      return complex(real + obj.real, imag + obj.imag);
   }
   // prefix uniary operator overloading
   complex operator--()
   {
      return complex(--real, --imag);
   }
   complex operator++(int)
   {
      return complex(real++, imag++);
   }
   void display()
   {
      if(imag>=0)
      cout << real << " + " << imag << " i " << endl;
      else
      cout << real << " - " << -imag << " i " << endl;

   }
   friend complex operator-(const complex& com1,const complex& com2);
};
complex operator-(const complex& com1,const complex& com2){
   return complex(com1.real-com2.real ,com1.imag-com2.imag);
}

int main()
{
   complex c1(3, 4), c2(3, 4);
   complex sum = c1 + c2;
   sum.display();
   --c1;
   c1.display();
   c1++;
   c1.display();
   complex minus = c1-c2;
   minus.display();
   return 0;
}