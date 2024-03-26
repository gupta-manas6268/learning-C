// Run code and check OUTPUT of the code properly.
// (See line-37 and line-61 of code carefully.)

#include<bits/stdc++.h>
using namespace std;

// Base class
class Employee{

public:
    int Id;
    float salary;

    Employee(int inputId){
        Id = inputId;
        salary = 34.0;
    }
    Employee(){}
};

// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{

//     class members/methods/etc...
// }

// Note:
// 1. Default visibility mode is private
// 2. Public Visibility Mode: Public members of the base class becomes Public members of
//                              the derived class.  
// 3. Private Visibility Mode: Public members of the base class becomes Private members of
//                              the derived class.   
// 4. Private members of the base class are never inherited.   


// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee{

public:
    Programmer(int inputId){
        Id = inputId;  // Here, 'Id' has public visibility mode. So, it becomes a
                       //  public member and is accessible from Outside.(See line-61 of code.)
    }

    int languageCode = 9;

    void getData(){
        cout << Id << endl;
    }
};

int main(){
    Employee manas(1), harry(2);

    cout << manas.salary << endl;
    cout << harry.salary << endl;
    cout << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.Id << endl;  // This line doesn't give error, because of 'public'
                                //  in line-37 of code.
    skillF.getData();

    return 0;
}