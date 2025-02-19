//define a class "circle" to represent circles. add a data member radius to store the radius of a circle. write function area() and parameter() to compute the area and parameter of a circle

#include<iostream>
using namespace std;

class circle{
    float radius;
    public:
    void getdata(){
        cout<<"enter the radius of the circle: ";
        cin>>radius;
    }
    void area(){
        cout<<"area of the circle of radius " <<radius<<" is: "<<3.14*radius*radius<<"\n";
    }
    void parameter(){
        cout<<"parameter of the circle of radius "<<radius<<" is: "<<2*3.14*radius<<"\n"; 
    }
};
int main(){
    circle c;
    c.getdata();
    c.area();
    c.parameter();
    return 0;
}