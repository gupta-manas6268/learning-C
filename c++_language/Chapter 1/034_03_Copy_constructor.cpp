// Here we Uncomment lines of Copy Constructor in this code.
// See lines-19 to 23 of this code carefully.

#include<bits/stdc++.h>
using namespace std;

class Number{
    int a;

public:
    Number(){
        a = 0;
    }

    Number(int num){
        a = num;
    }

    Number(Number &object){  // This is a Copy Constructor.
        cout << "Copy constructor called!!! " << endl;

        a = object.a;
    }

    void display(){
        cout << "The number for this object is: " << a << endl;
    }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    cout << endl;

    cout << "Copy constructor for z1: " << endl;

    Number z1(z);  // Copy constructor invoked.
    z1.display();
    
    cout << endl;

    cout << "Copy constructor for z2: " << endl;

    z2 = z;  // Copy constructor not called
    z2.display();
    
    cout << endl;

    cout << "Copy constructor for z3: " << endl;

    Number z3 = z;  // Copy constructor invoked.

    cout << endl;

    return 0;
}