#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived : public Base {
public:
    Derived(int a, int b) : Base(a, b) {}

    void product() {
        cout << "Product: " << (num1 * num2) << endl;
    }
};

int main() {
    Derived d(4, 5);
    d.product();
    return 0;
}
