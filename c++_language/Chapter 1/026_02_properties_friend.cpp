// Properties of friend functions
// 1. Not in the scope of class
// 2. Since it is not in the scope of the class, it cannot be called
//     from the Object of that Class. 
//      ( c1.sumComplex() == Invalid ) (See line-37 of Code.)
// 
// 3. Can be invoked without the help of any object
// 4. Usually contains the objects as arguments.
// 5. Can be declared inside public.
// 6. It cannot access the members directly by their names and need
//     'object_name.member_name' to access any member.


#include <iostream>
using namespace std;

class Complex {
    int a, b;

    friend Complex sumComplex(Complex o1, Complex o2); 

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    // friend Complex sumComplex(Complex o1, Complex o2); // If we uncomment this line and then also code will work
                                                          // fine, According to point-5 or line-9 of this code.

    void printNumber() {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main() {
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();
    // c1.sumComplex(); // This line will give me error( See line-4.)

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}