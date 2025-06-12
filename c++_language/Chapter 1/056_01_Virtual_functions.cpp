// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class BaseClass{

public:
    int var_base = 1;

    // void display(){  // Also check OUTPUT when you uncomment this line
                        // and compare both OUTPUT.

    // 'virtual' functions
    virtual void display(){
        cout << "1. Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass{

public:
    int var_derived = 2;

    void display(){
        cout << "2. Displaying Base class variable var_base: " << var_base << endl;
        cout << "2. Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass object_base;

    DerivedClass object_derived;

    base_class_pointer = &object_derived;
    base_class_pointer->display();

    return 0;
}