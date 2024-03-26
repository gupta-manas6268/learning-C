// Ambiguity Resolution in Inheritance

#include<bits/stdc++.h>
using namespace std;

class B{

public:
    void say(){
        cout << "Hello world" << endl;
    }
};

// Class D is public Inheritance of B.
class D : public B{
// D's new say() method will override base class's say() method

//     int a;
// public:
//     void say(){
//         cout << "Hello my fellow people" << endl;
//     }
};

int main(){
    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say(); // Also run code when uncomment line-18 to line-22.

    return 0;
}