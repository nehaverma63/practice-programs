#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base(int a, int b) : num1(a), num2(b) {}
};

class FirstDerived : public Base {
public:
    FirstDerived(int a, int b) : Base(a, b) {}

    void displayNum1() {
        cout << "First Number: " << num1 << endl;
    }
};

class SecondDerived : public Base {
public:
    SecondDerived(int a, int b) : Base(a, b) {}

    void displayNum2() {
        cout << "Second Number: " << num2 << endl;
    }
};

int main() {
    FirstDerived fd(10, 20);
    fd.displayNum1();

    SecondDerived sd(30, 40);
    sd.displayNum2();

    return 0;
}
