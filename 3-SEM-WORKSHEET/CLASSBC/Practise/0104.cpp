#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class A" << endl;
    }
};

class B :virtual public A { };  // B inherits from A
class C :virtual public A { };  // C inherits from A

class D : public B, public C { };  // D inherits from B and C

int main() {
    D obj;
    obj.show();  // Error: Ambiguity!
    return 0;
}
