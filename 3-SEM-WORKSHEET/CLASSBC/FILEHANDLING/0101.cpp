#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("sample.txt",ios::app);
    fout<<"this is a line";

ifstream fin;
     fin.open("sample.txt");

    // Execute a loop until EOF (End of File)
    while (getline(fin, line)) {
      
        // Print line (read from file) in Console
        cout << line << endl;
    }
    fout.close();
    return 0;
}