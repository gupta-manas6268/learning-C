// There is no Screenshot notes in this Lecture.

// Solve 042_01_quiz.cpp

// Ambiguity Resolution in Inheritance
#include<bits/stdc++.h>
using namespace std;

class Base1{

public:
    void greet(){
        cout << "How are you ?" << endl;
    }
};

class Base2{

public:
    void greet(){
        cout << "Kaise ho ?" << endl;
    }
};

class Derived : public Base1, public Base2{
    int a;

public:
    void greet(){
        Base2 :: greet();
    }
};

int main(){
    // Ambiguity 1
    Base1 base1object;
    Base2 base2object;

    base1object.greet();
    base2object.greet();

    Derived d;
    d.greet();
    
    return 0;
}