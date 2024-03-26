#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a, b;

public:
    Complex(){  // It is a Default_constructor
        a = 0; b = 0;
    }
    Complex(int x, int y){  // It is a Parameterized_constructor
        a = x;
        b = y;
    }

    Complex(int x){         // It is a Parameterized_constructor
        a = x; b = 0;
    }

    void printNumber(){
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

int main(){
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    // Complex c3(); // This line will give error, because of this -> '()'.
    c3.printNumber();
    
    return 0;
}