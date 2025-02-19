// write a program with one exception


#include <iostream>
// #include <stdexcept> // Include this header for standard exceptions
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try {
        if (b == 0) {
            throw runtime_error("0 cannot divide a number.");
        }
        cout << "Result: " << a / b << endl;
    } catch (const runtime_error &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
