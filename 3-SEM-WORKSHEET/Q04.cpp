// define a class complex with two data members "Real " and "img" to represent real and imaginary of a complex number .write member functiomns rpart():to return the real part of a complex number  ipart(): to return the imaginary part  of a complex number add():to add two complex numbers . multi(): to multiply two complex numbers

// my version :|

/* #include <iostream>
using namespace std;
class complex
{
public:
    float real;
    float img;

    void toaccess(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    void add(float x, float y)
    {
        float realsum = real + x;
        float imgsum = img + y;
        cout << "sum is : " << realsum <<" + "<< imgsum << " i";
    }
};
int main()
{
    complex c1, c2,c3;
    c1.real=2;
    c1.img=3;
    c2.real=5;
    c2.img=8;
    c3.add(c2.real,c2.img);
    return 0;
}*/

// now question verson

#include <iostream>
using namespace std;

class complex
{
    float real;
    float imag;

public:
    complex()
    {
        real = imag = 0;
    }
    complex(float a){
        real=imag=a;
    }
    complex(float a ,float b){
        real =a;
        imag=b;
    }
float rpart(){
return real;
}
float ipart(){
return imag;
}
complex add(const complex &other){
    return complex(real+other.real ,imag +other.imag);
}

complex mul(const complex &other){
    return complex(real*other.real - imag*other.imag,real*other.imag + imag*other.real);
}
void display(){
    if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
}
};
int main(){
    complex c1(2,3);
    complex c2(4,6);
    complex c3=c1.add(c2);
    c3.display();
    complex c4=c1.mul(c2);
    c4.display();
    return 0;


}
