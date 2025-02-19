// write a program with one or two exception

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a :";
    cin >> a;
    cout << "enter b :";
    cin >> b;
    try
    {
        if (a > 100)
        {
            throw a;
            cout << "i have limit ";
        }
         if (b == 0) {
            throw b;
            cout<<("0 cannot divide a number.");
        }
        cout << "Result: " << a / b << endl;
    }
    catch (...)
    {
        cout << "exception occurs ";
    }
}