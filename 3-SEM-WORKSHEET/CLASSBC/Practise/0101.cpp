#include <iostream>
using namespace std;

class Array {
    int *arr; // Pointer for dynamic memory allocation
    int size;

public:
    // Dynamic Constructor
    Array(int s) {
        size = s;
        arr = new int[size]; // Allocating memory
        cout << "Array of size " << size << " created." << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr; // Deallocating memory
        cout << "Memory deallocated." << endl;
    }

    void inputValues() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void displayValues() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;

    // Taking size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    // Object created using dynamic constructor
    Array arr(n);
    arr.inputValues();
    arr.displayValues();

    // Destructor will automatically be called here
    return 0;
}
