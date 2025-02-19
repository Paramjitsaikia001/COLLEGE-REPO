// for the class "complex " defined in 4 above,overload the <<,>> + and * operators in the usual sense .also overload the unary - operator

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
    friend ostream &operator<<(ostream &out, const complex &c);
    friend istream &operator>>(istream &in, complex &c);
    friend complex operator+(complex &c1, complex &c2);
    friend complex operator*(complex &c1, complex &c2);
    friend complex operator-(const complex &c);
};

ostream &operator<<(ostream &out, const complex &c)
{
    if (c.imag >= 0)
        out << c.real << " + " << c.imag << "i"; // For positive imaginary part
    else
        out << c.real << " - " << -c.imag << "i"; // For negative imaginary part
    return out;
}
istream &operator>>(istream &in, complex &c)
{
    in >> c.real;
    in >> c.imag;
    return in;
}
complex operator+(complex &c1, complex &c2)
{
    return complex((c1.real + c2.real), (c1.imag + c2.imag));
}
complex operator*(complex &c1, complex &c2)
{
    return complex(c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c1.imag * c2.real);
}
complex operator-(const complex &c)
{
    return complex(-c.real, -c.imag);
}
int main()
{
    complex c1, c2;
    cout << "enter the first complex number(Real and imaginary part): ";
    cin >> c1;
    cout << "enter the second complex number(Real and imaginary part): ";
    cin >> c2;

    cout << "you entered: ";
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    complex c3 = c1 + c2;
    complex c4 = c1 * c2;
    cout << "c1 + c2: " << c3 << endl;
    cout << "c1 * c2: " << c4 << endl;
    cout << "-c1: " << -c1 << endl;
    return 0;
}