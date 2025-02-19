/*Define a class "string" with the following data members char *p, int size, and write member function to do the folowing (without using library function) and using dynamic memeory allocation.
length of the string
compare two string
copy one string to another
reverse the string
write suitable constructors and desctructors . also write a copy constructor for the class.
*/

#include <iostream>
using namespace std;
class string_
{
    char *p;
    int size;

public:
    string_(int s = 20)
    {
        size = s;
        p = new char[size];
    }

    // copy one string to another
    string_(const string_ &obj)
    {
        size = obj.size;
        p = new char[size];
        for (int i = 0; i < size; i++)
        {
            p[i] = obj.p[i];
        }
    }

    ~string_()
    {
        delete[] p;
    }
    void get_date()
    {
        cout << ("enter the size: ");
        cin >> size;
        delete[] p;         // Free previous memory
        p = new char[size]; // Allocate new memory
        cout << "enter the string : ";
        for (int i = 0; i < size; i++)
        {
            cin >> p[i];
        }
    }

    // length of the string
    void lenght()
    {
        cout << "The size of the string: " << size << endl;
    }

    // compare two string
    int compare(const string_ &obj)
    {
        if (size == obj.size)
        {
            for (int i = 0; i < size; i++)
            {
                if (p[i] != obj.p[i])
                    return 0;
            }
            return 1;
        }
        return 0;
    }

    // reverse the string
    string_ reverse(const string_ &obj)
    {
        string_ s(obj.size);
       for(int i=0;i<obj.size;i++){
        s.p[i]=obj.p[size-1-i];
       }
        return s;
    }

    void diplay()
    {
        cout << "the string is : ";
        for (int i = 0; i < size; i++)
        {
            cout << p[i];
        }
        cout << endl;
    }
};
int main()
{
    string_ s;
    cout << "first string: " << endl;
    s.get_date();
    s.lenght();
    string_ s2;
    cout << "second string: " << endl;
    s2.get_date();
    if (s.compare(s2))
    {
        cout << "they are equal" << endl;
    }
    else
    {
        cout << "they are not equal" << endl;
    }

    // copy one string to another
    string_ s3(s2);
    cout << "after the copy second string: " << endl;
    s3.diplay();

    string_ s4 = s4.reverse(s2);
    cout<<"reversing the second obj: ";
    s4.diplay();
    cout << "displaying first string :" << endl;
    s.diplay();
    return 0;
}