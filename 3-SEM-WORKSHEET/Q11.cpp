/*
define a class student with the following specification :
rollno:interger sname:20 chararcters
derive two classes artst adnd scst . the clss aetst will represente students belonging to arts stream and the class scst will represent students belonging to science stream. the artst class will have additional data members ph,hs,sn and as to store marls obtained br a student in three subjexts philosophy,history,english and assamese.the class scst will have additional data member sph,ch,ma.and en to store marks obtained in physics,chemistry,mathematics and english . write the folloeing members function in the classes artst and scst . ctotal():a dunction to catculate the total marks obtained by a student;takedata():a function to accept values of the data members and showdata():a function to display the marks sheet of a student
*/

#include <iostream>
using namespace std;
class student
{
    int rollno;
    char sname[20];

public:
    void takedata()
    {
        // cout << "Enter you Roll No: ";
        // cin >> rollno;
        // cout << "enter your Name: ";
        // cin >> sname;

        cout << "Enter your Roll No: ";
        cin >> rollno;
        cin.ignore(); // Clear the input buffer
        cout << "Enter your Name: ";
        cin.getline(sname, 20); // Use getline to read the full name
    }
    void showdata()
    {
        cout << "\n\nSTUDENT'S DETAILS \n";
        cout << "Student name is " << sname << endl;
        cout << "Roll no: " << rollno << "\n\n";
    }
};
class artst : public student
{
    double ph, hs, en, as;

public:
    void ctotal()
    {
        cout << "\n\nTOTAL MARKS OBTAINED: " << ph + hs + en + as << endl;
    }
    void takedata()
    {
        cout << "\n\n-----Student of Arts Stream-----\n\n";
        student::takedata();
        cout << "Enter the marks of philosophy: ";
        cin >> ph;
        cout << "Enter the marks of history: ";
        cin >> hs;
        cout << "Enter the marks of english: ";
        cin >> en;
        cout << "Enter the marks of assamese: ";
        cin >> as;
    }
    void showdata()
    {
        student::showdata();
        cout << "\n\nThe marks are: \n";
        cout << " Philosophy: " << ph << endl;
        cout << " History: " << hs << endl;
        cout << " English: " << en << endl;
        cout << " Assamese: " << as << endl;
    }
};

class scst : public student
{
    double sph, ch, ma, en;

public:
    void ctotal()
    {
        cout << "\n\nTOTAL MARKS OBTAINED: " << sph + ch + en + ma << endl;
    }
    void takedata()
    {
        cout << "\n\n-----Student of science Stream------\n\n";
        student::takedata();
        cout << "Enter the mark of physics: ";
        cin >> sph;
        cout << "Enter the mark of chemsitry: ";
        cin >> ch;
        cout << "Enter the mark of mathematics: ";
        cin >> ma;
        cout << "Enter the mark of english: ";
        cin >> en;
    }
    void showdata()
    {
        student::showdata();
        cout << "\n\nThe marks are: \n";
        cout << " Physics: " << sph << endl;
        cout << " Chemistry: " << ch << endl;
        cout << " Mathematics: " << ma << endl;
        cout << " English: " << en << endl;
    }
};

int main()
{
    artst A1;
    A1.takedata();
    A1.showdata();
    A1.ctotal();
    scst S1;
    S1.takedata();
    S1.showdata();
    S1.ctotal();
    return 0;
}