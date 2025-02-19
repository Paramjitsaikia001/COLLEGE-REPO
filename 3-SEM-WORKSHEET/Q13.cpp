/*define a abstract base class figure and a to it pure virtual functions
display() :to display a figure
get():to input parameters of the figure
area():to compute the area of a figure
perimeter():to compute the perimeter of a figure.

derive three classes circle,rectangle and triangle from it .a circle id t be represented by its radius.rectangle by its length and breadth and triangle by the lengths of its sides.write a main functionand write neccessary statements to achieve run time polymorphism*/

#include <iostream>
#include <cmath>
using namespace std;
class figure
{
public:
    virtual void display() = 0;
    virtual void get() = 0;
    virtual void area() = 0;
    virtual void perimeter() = 0;
};
class circle : public figure
{
    double radius;

public:
    void display()
    {
        cout << "this is a circle ." << endl;
    }
    void get()
    {
        cout << "Enter the radius of cicle :";
        cin >> radius;
    }

    void area()
    {
        cout << "area of circle  : " << 3.14 * radius * radius << endl;
    }

    void perimeter()
    {
        cout << "perimeter of circle : " << 2 * 3.14 * radius << endl;
    }
};

class rectangle : public figure
{
    double length, breadth;

public:
    void display()
    {
        cout << "this is a Rectangle ." << endl;
    }
    void get()
    {
        cout << "Enter the length of rectangle :";
        cin >> length;
        cout << "Enter the breadth of rectangle :";
        cin >> breadth;
    }

    void area()
    {
        cout << "area of rectangle  : " << length * breadth << endl;
    }

    void perimeter()
    {
        cout << "perimeter of rectangle : " << 2 * (length + breadth) << endl;
    }
};

class triangle : public figure
{
    double side_1, base, side_3, height;

public:
    void display()
    {
        cout << "this is a triangle ." << endl;
    }
    void get()
    {
        cout << "Enter the sides  of triangle :";
        cin >> side_1 >> base >> side_3;
        height = sqrt((side_3 * side_3) - (base / 2.0) * (base / 2.0));
    }

    void area()
    {
        cout << "area of circle  : " << (height * base) / 2.0 << endl;
    }

    void perimeter()
    {
        cout << "perimeter of circle : " << side_1 + base + side_3 << endl;
    }
};

int main()
{
    figure *fc, *fr, *ft;
    circle c;
    fc = &c;
    fc->display();
    fc->get();
    fc->area();
    fc->perimeter();
    cout << "\n";
    rectangle r;
    fr = &r;
    fr->display();
    fr->get();
    fr->area();
    fr->perimeter();

    cout << "\n";
    triangle t;
    ft = &t;
    ft->display();
    ft->get();
    ft->area();
    ft->perimeter();
    return 0;
}