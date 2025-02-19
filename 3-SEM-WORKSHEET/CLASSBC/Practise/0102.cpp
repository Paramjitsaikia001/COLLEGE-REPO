#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) : value(v) {} // Constructor to initialize value

    // Overloading prefix increment
    Counter& operator++() {
        ++value; // Increment the value
        return *this; // Return the current object
    }

    // Overloading postfix increment
    Counter& operator++(int) {
      //   Counter temp = *this; // Store current state
        value++; // Increment the value
        return *this; // Return the original object
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(10);

    // Prefix increment
    ++c;
    c.display(); // Value: 11

    // Postfix increment
    c++;
    c.display(); // Value: 12
    c++;
    c.display(); // Value: 12


    return 0;
}
