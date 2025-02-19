/*12. define a abstract base class printer . derive three classes laser-printer,line-printer and inkjet-printer . the derived classess will have data members to store the features of the that particular printer . write a pure virtual function display() in the base class and redefine it in the derived classes*/

#include <iostream>
using namespace std;

// this the abstract class
class printer
{
public:
    virtual void display() = 0; // pure virtual function
};
class laser_printer : public printer
{
    int laser;

public:
    void display()
    {
        cout << "this is a laser printer"<<endl;
    }
};
class line_printer:public printer{
    int line;
    public:
    void display(){
        cout<<"this is the line printer"<<endl;
    }
};
class inkjet_printer :public printer{
    int inkjet;
    public:
    void display(){
        cout<<"this is a inkjet printer"<<endl;
    }
};

int main(){
    laser_printer LasP;
    LasP.display();
    line_printer LinP;
    LinP.display();
    inkjet_printer InkP;
    InkP.display();
    return 0;
}