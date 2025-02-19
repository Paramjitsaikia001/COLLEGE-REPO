/* Define a class named "triangle" to represent a triangle using the lengths of the three sides. Write a constructor to initialize objects of this class, given the lengths of the sides. Also write member functions to check

 (a) if a triangle is isosceles

 (b) if a triangle is equilateral

 Write a main function to test your functions.*/

#include <iostream>
using namespace std;
class triangle
{
public:
    int first_side;
    int sec_side;
    int third_side;

    // constructor
    triangle()
    {
        first_side = 3;
        sec_side = 4;
        third_side = 3;
    }

    //parameter constructor
    triangle(int x,int y,int z){
        first_side=x;
        sec_side=y;
        third_side=z;
    }

   void display()
    {
        if (first_side == sec_side && sec_side== third_side)
        {
            cout << "it is equilateral triangle\n";
        }
        else if (first_side == sec_side || sec_side == third_side || third_side == first_side)
        {
            cout << "it is a isoscole triangle\n";
        }
        else
        {
            cout << "none od these";
        }
    }
};
int main()
{
    triangle t1;
    t1.display();
    

    triangle t2(4,4,4);
    // cout<<"\n";
    t2.display();
    return 0;
}