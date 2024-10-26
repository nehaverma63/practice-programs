#include <iostream>
using namespace std;

class A {
protected:
    int valueA;
public:
    A(int a) : valueA(a) {}
};

class B : public A {
public:
    B(int a) : A(a) {}
    void displayB() {
        cout << "Value from B: " << valueA << endl;
    }
};

class C : public A {
public:
    C(int a) : A(a) {}
    void displayC() {
        cout << "Value from C: " << valueA << endl;
    }
};

class D : public A {
public:
    D(int a) : A(a) {}
    void displayD() {
        cout << "Value from D: " << valueA << endl;
    }
};

class E : public B {
public:
    E(int a) : B(a) {}
    void displayE() {
        cout << "Value from E (inherited from B): " << valueA << endl;
    }
};

int main() {
    B b(10);
    b.displayB();

    C c(20);
    c.displayC();

    D d(30);
    d.displayD();

    E e(40);
    e.displayE();

    return 0;
}
