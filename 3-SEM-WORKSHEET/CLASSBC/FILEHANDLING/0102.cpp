#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outFile("sample2.txt", ios::app); // Open file for writing
   if (!outFile)
   {
      cout << "Error opening file!" << endl;
      return 1;
   }
   outFile << "Hello, File Handling in C++!" << endl;
   ifstream infile("sample2.txt");
   string line;
   while (getline(infile, line))
   {
      cout << line << endl;
   }
   outFile.close(); // Close the file
   cout << "Data written successfully." << endl;
   return 0;
}
