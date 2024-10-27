#include <iostream>
using namespace std;

class Base {
protected:
    int num1;
public:
    Base(int a) : num1(a) {}
};

class FirstDerived : public Base {
protected:
    int num2;
public:
    FirstDerived(int a, int b) : Base(a), num2(b) {}
};

class SecondDerived : public FirstDerived {
public:
    SecondDerived(int a, int b) : FirstDerived(a, b) {}

    void sum() {
        cout << "Sum: " << (num1 + num2) << endl;
    }
};

int main() {
    SecondDerived sd(3, 5);
    sd.sum();
    return 0;
}
