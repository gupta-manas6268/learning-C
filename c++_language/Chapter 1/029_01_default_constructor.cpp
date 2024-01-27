// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a, b;

    public:
    // Creating a constructor:
    // 1. Constructor is a special member function with same name as
    //     of the class. 
    // 2. It is used to initialize the objects of its class.
    // 3. It is automatically invoked whenever an object is created.

    Complex(void);  // Constructor declaration
    // Also, run code when you comment above line.

    void printNumber(){
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

// Complex :: Complex1(void){  // This line will give error, because of
                               // different names(which is 'Complex1').

Complex :: Complex(void){  // ---> This is a default constructor as it accepts 
                           //       no parameters.

    a = 10; b = 20;
    // Check is we comment above line, then it will garbage value 
    // in place of this '10' and '20'. 

    cout << "Hello world" << endl;
}

int main(){
    Complex c1, c2, c3;

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}