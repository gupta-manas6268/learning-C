// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class BaseClass{

public:
    int var_base;

    void display(){
        cout << "1. Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass{

public:
    int var_derived;

    void display(){
        cout << "2. Displaying Base class variable var_base: " << var_base << endl;
        cout << "2. Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass object_base;

    DerivedClass object_derived;
    base_class_pointer = &object_derived;  // Pointing base class pointer to derived class.

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134;  // Will throw an error
    base_class_pointer->display();

    cout << endl;

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();
    cout << endl;

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &object_derived;

    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}