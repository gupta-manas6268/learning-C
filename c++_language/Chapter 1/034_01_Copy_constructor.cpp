// There is no Screenshot notes in this Lecture.


// Copy Constructor

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

    // Copy Constructor
    Number(Number &object){  // This is a Copy Constructor.
        cout << "Copy constructor called!!! " << endl;

        a = object.a;
    }

    void display(){
        cout << "The number for this object is: " << a << endl;
    }
};

int main(){
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();

    cout << endl;

    // z1 and z2 should exactly resemble z or x or y.
    Number z1(x);
    z1.display();

    cout << endl;

    Number z2(z);
    z2.display();


    return 0;
}