// 2.define a structure "employee" with the following speifications
//   empno:interger
//   ename:20 character
//   basic,hra, da :float
//   calculate():a function to compute net pay as basic+hra+da with float return type
//   getdata():a function ot read for empno,ename, basic,hra,da
//   display():a function to display all the data on the screen
//   write the program to test the program

#include <iostream>
using namespace std;
struct employee
{
    int empno;
    char ename[20];
    float basic, hra, da, netPay;
    float calculate()
    {
        netPay = basic + hra + da;
        return netPay;
    }
    void getdata()
    {
        cout << "enter the employe no : ";
        cin >> empno;
        cout << "enter the employe name : ";
        cin >> ename;
        cout << "enter the employe basic  : ";
        cin >> basic;
        cout << "enter the employe hra : ";
        cin >> hra;
        cout << "enter the employe da : ";
        cin >> da;
    }

    void display()
    {
        cout << "\nemployee details: \n";
        cout << "\nemployee no: " << empno << "\n";
        cout << "employee name: " << ename << "\n";
        cout << "employee basic salary: " << basic << "\n";
        cout << "employee house rent allowance(hra): " << hra << "\n";
        cout << "employee dearness allowance(da): " << da << "\n\n";
        cout << "employee's net salary: " << netPay << "\n";
    }
};
int main()
{
    employee paramjit;
    paramjit.getdata();
    paramjit.calculate();
    paramjit.display();
    return 0;
}