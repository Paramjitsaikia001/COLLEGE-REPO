
#include <iostream>
#include <cmath>
using namespace std;
class triangle
{
   double first_side, sec_side, third_side;

public:
   triangle(double a, double b, double c)
   {
      first_side = a;
      sec_side = b;
      third_side = c;
   }
   void check()
   {
      if (first_side == sec_side && sec_side == third_side)
      {
         cout << "this is a isosceles triangle " << endl;
      }
      else if ((first_side == sec_side) || (sec_side == third_side) || (third_side == first_side))
      {
         cout << "this is an equilateral triangle" << endl;
      }
      else
      {
         cout << "this is not  a isosceles triangle and equitateral triangle" << endl;
      }
   }
};

struct employee
{
   int empno;
   char ename[20];
   float basic, hra, da;
   float calculate()
   {
      return basic + hra + da;
   }
   void getdate()
   {
      cout << "enter the empno :";
      cin >> empno;
      cout << "enter the ename :";
      cin >> ename;
      cout << "enter the basic :";
      cin >> basic;
      cout << "enter the hra :";
      cin >> hra;
      cout << "enter the da :";
      cin >> da;
   }
   void display()
   {
      cout << "details of the employeee :" << endl;
      cout << "emp NO : " << empno << endl;
      cout << "Name : " << ename << endl;
      cout << "basic salary: " << basic << endl;
      cout << "hra : " << hra << endl;
      cout << "da: " << da << endl;
      cout << "the Net salary : " << calculate() << endl;
   }
};

class complex
{
   double real;
   double imag;

public:
   complex()
   {
      real = imag = 0;
   }
   complex(int a)
   {
      real = imag = a;
   }
   complex(int a, int b)
   {
      real = a;
      imag = b;
   }
   double rpart()
   {
      return real;
   }
   double ipart()
   {
      return imag;
   }
   void add(const complex &com1)
   {
      if (com1.imag >= 0)
      {
         cout << real + com1.real << " + " << imag + com1.imag << " i " << endl;
      }
      else
      {
         cout << real + com1.real << " - " << -(imag + com1.imag) << " i " << endl;
      }
   }
   void multi(const complex &com1)
   {
      if (com1.imag >= 0)
      {
         cout << (real * com1.real) - (imag * com1.imag) << " + " << ((real * com1.imag) + (imag * com1.real)) << " i " << endl;
      }
      else
      {
         cout << (real * com1.real) - (imag * com1.imag) << " + " << -((real * com1.imag) + (imag * com1.real)) << " i " << endl;
      }
   }
};

class point
{
   double xordinate, yordinate;

public:
   point()
   {
      xordinate = yordinate = 0;
   }
   point(int a)
   {
      xordinate = yordinate = a;
   }
   point(int a, int b)
   {
      xordinate = a;
      yordinate = b;
   }
   double dist()
   {
      return sqrt(yordinate * yordinate + xordinate * xordinate);
   }
   double slope()
   {
      return yordinate / xordinate;
   }
   void display()
   {
      cout << " the distance is : " << dist() << endl;
      cout << "the slope is : " << slope() << endl;
   }
};

class string_
{
   char *p;
   int size;

public:
   string_(int s)
   {
      size = s;
      p = new char[size];
      cout << "enter the element of the string : ";
      for (int i = 0; i < size; i++)
      {
         cin >> p[i];
      }
   }
   ~string_()
   {
      delete[] p;
   }

   string_(const string_ &obj)
   {
      size = obj.size;
      p = new char[size];
      for (int i = 0; i < obj.size; i++)
      {
         p[i] = obj.p[i];
      }
   }
   void display()
   {
      cout << "size of the string : " << size << endl;
      cout << "the string is : ";
      for (int i = 0; i < size; i++)
      {
         cout << p[i];
      }
      cout << endl;
   }

   bool compare(const string_ &obj)
   {
      if (size == obj.size)
      {
         for (int i = 0; i < size; i++)
         {
            if (p[i] != obj.p[i])
            {
               return 0;
            }
         }
         return 1;
      }
      else
      {
         return 0;
      }
   }

   void reverse()
   {
      cout << "reverse of the string: ";
      for (int i = 0; i < size / 2; i++)
      {

         char t = p[i];
         p[i] = p[size - 1 - i];
         p[size - 1 - i] = t;
      }
      cout << endl;
   }
};

class complex2
{
   double real, imag;

public:
   complex2()
   {
      real = imag = 0;
   }
   complex2(double a)
   {
      real = imag = a;
   }
   complex2(double a, double b)
   {
      real = a;
      imag = b;
   }

   complex2 operator+(const complex2 &com)
   {
      return complex2(real + com.real, imag + com.imag);
   }
   complex2 operator*(const complex2 &com)
   {
      return complex2(real * com.real - imag * com.imag, imag * com.real + real * com.imag);
   }
   complex2 &operator-()
   {
      real = -real;
      imag = -imag;
      return *this;
   }
   friend ostream &operator<<(ostream &out, const complex2 &com);
   friend istream &operator>>(istream &in, complex2 &com);
};

ostream &operator<<(ostream &out, const complex2 &com)
{
   if (com.imag >= 0)
   {
      out << com.real << " + " << com.imag << " i " << endl;
   }
   else
   {
      out << com.real << " - " << -com.imag << " i " << endl;
   }
   return out;
}
istream &operator>>(istream &in, complex2 &com)
{
   in >> com.real;
   in >> com.imag;
   return in;
}

class Time
{
   int hours, minute, sec;

public:
   Time()
   {
      cout << "enter the hours ,minute and sec with space : ";
      cin >> hours >> minute >> sec;
      if ((hours < 0 || hours > 23) || (minute < 0 || minute > 59) || (sec < 0 || sec > 59))
      {
         cout << "this is invalid time " << endl;
        hours =0;minute=0;sec=0;
      }
   }

   void display()
   {
      if (hours < 10)
         cout << "0";
      cout << hours << ":";
      if (minute < 10)
         cout << "0";
      cout << minute << ":";
      if (minute < 10)
         cout << "0";
      cout << minute << ":";
      if (sec < 10)
         cout << "0";
      cout << sec;
   }
};
int main()
{
   //    triangle t1(2,3,3),t2(1,1,1);
   //    t1.check();
   //    t2.check();

   //    employee e;
   //    e.getdate();
   //    e.display();

   // complex c1(3, 4), c2(4, 5);
   // c1.add(c2);
   // c1.multi(c2);

   // point p1(3, 5);
   // p1.dist();
   // p1.slope();
   // p1.display();

   // string_ s1(5);
   // string_ s2(s1);
   // s2.display();
   // if (s2.compare(s1))
   // {
   //    cout << "they are equal" << endl;
   // }
   // else
   // {
   //    cout << "they are not equal" << endl;
   // }
   // s1.reverse();
   // s1.display();

   // complex2 c4, c5;
   // cout << "Enter the a complex no: ";
   // cin >> c4;
   // cout << "Enter the a complex no: ";
   // cin >> c5;
   // complex2 multi = c4 * c5;
   // cout << " multiple of your complex no :";
   // cout << multi;
   // complex2 c1(2, 3), c2(4, 5);
   // complex2 c3 = c1 + c2;
   // cout << "sum of the two complex no 2+3i and 4+5i: ";
   // cout << c3;
   // cout << "your entered complex no : ";
   // cout << c4;
   // cout << -c4;

   Time t;
   t.display();

   return 0;
}