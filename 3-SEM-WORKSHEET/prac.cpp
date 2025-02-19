#include <iostream>
#include<cstring>
using namespace std;
class student
{
    int roll;
    // char name[20];
    string name;

public:
    student(int roll, string name)
    {
        this->roll = roll;
        this->name=name;
    }
    student( student& obj){
         this->roll = obj.roll;
       this->name=obj.name;
    }
    friend void print(student &other);
};

void print(student &other){
    cout<<"student name is: "<<other.name <<"\n"<<"student roll no: "<<other.roll;
}
int main(){
    student s1(20,"paramjit");
    print(s1);

    student s2(s1);
    cout<<"\ndetails of s2: "<<endl;
    print(s2);
};