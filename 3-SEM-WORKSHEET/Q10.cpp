/*write a class based program implementing static members*/
#include <iostream>
using namespace std;
class person
{
public:
    static int age;
    static void display()
    {
        cout << age << endl;
    }
};
int person::age = 4;
int main()
{
    person p1;
    p1.display();
    person::display();
    person p2;
    p2.age = 12;
    p2.display();
    person p3;
    p3.display();
    return 0;
}