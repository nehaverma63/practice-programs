#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    Sum(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }

    Sum(char a, char b) {
        cout << "Sum of characters (ASCII): " << (int(a) + int(b)) << endl;
    }
};

int main() {
    Sum s1(3, 5);
    Sum s2(2.5f, 4.5f);
    Sum s3('A', 'B');
    return 0;
}
