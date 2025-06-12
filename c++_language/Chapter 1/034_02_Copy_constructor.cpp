// Here we Comment lines of Copy Constructor in this code.
// See lines-19 to 26 of this code carefully.

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

    // This code didn't give error because,
    // when no Copy Constructor is found, compiler supplies its 
    // own copy_constructor.

    // Number(Number &object){  // This is a Copy Constructor.
    //     cout << "Copy constructor called!!! " << endl;

    //     a = object.a;
    // }

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

    Number z1(z);  
    z1.display();

    


    return 0;
}