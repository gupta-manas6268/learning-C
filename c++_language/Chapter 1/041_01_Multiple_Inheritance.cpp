// There is no Screenshot notes in this Lecture.

#include<bits/stdc++.h>
using namespace std;

// Syntax for Inheriting in Multiple inheritance.
// class Derived: visibility-mode base1, visibility-mode base2{
//     // Class body of class "Derived"
// };

class Base1{
    
protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    
protected:
    int base2int;
public:
    void set_base2int(int a){
        base2int = a;
    }
};

class Base3{
    
protected:
    int base3int;
public:
    void set_base3int(int a){
        base3int = a;
    }
};

// It is Multiple Inheritance of 'Base1' and 'Base2' class.
class Derived : public Base1, public Base2, public Base3{

public:
    void show(){
        cout << "The value of Base1 is: " << base1int << endl;
        cout << "The value of Base2 is: " << base2int << endl;
        cout << "The value of Base3 is: " << base3int << endl;
        cout << "The sum of these values is: " << base1int + base2int + base3int << endl;
    }
};

// The Inherited 'derived' class will look something like this:
// Data members:
//     base1int --> protected
//     base2int --> protected

// Member functions:
//     set_base1int() --> public
//     set_base2int() --> public
//     set_show() --> public

int main(){
    Derived manas;
    manas.set_base1int(23);
    manas.set_base2int(55);
    manas.set_base3int(80);
    manas.show();

    return 0;
}