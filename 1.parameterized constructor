#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int a, int b) : num1(a), num2(b) {}

    void swap() {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    void display() {
        cout << "After swapping: " << num1 << " " << num2 << endl;
    }
};

int main() {
    SwapNumbers swap(5, 10);
    swap.swap();
    swap.display();
    return 0;
}
