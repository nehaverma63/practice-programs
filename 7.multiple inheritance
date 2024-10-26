#include <iostream>
using namespace std;

class Base1 {
protected:
    int num1;
public:
    Base1(int a) : num1(a) {}
};

class Base2 {
protected:
    int num2;
public:
    Base2(int b) : num2(b) {}
};

class Derived : public Base1, public Base2 {
public:
    Derived(int a, int b) : Base1(a), Base2(b) {}

    void sum() {
        cout << "Sum: " << (num1 + num2) << endl;
    }
};

int main() {
    Derived d(7, 3);
    d.sum();
    return 0;
}

