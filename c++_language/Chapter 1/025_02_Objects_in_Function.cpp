#include <iostream>
using namespace std;

class Complex {
    int a;
    int b;

public:
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }

    void setDataBySum(Complex c1, Complex c2) {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void printNumber() {
        cout << "Your complex number is: " << a << "+" << b << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(1, 2);  // Also, run code when you comment this line.
    c1.printNumber();

    c2.setData(3, 4);  // Also, run code when you comment this line.
    c2.printNumber();

    c3.setDataBySum(c1, c2);  // This is Objects as Function arguments.
    c3.printNumber();

    return 0;
}
