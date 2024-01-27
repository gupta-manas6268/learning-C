// There is Screenshot notes in Lecture-20.

// But there is no Screenshot notes in this Lecture-21.

#include<iostream>
using namespace std;

// Classes, Public and Private access modifiers.

class Employee{
    private:
        int a, b, c;

    public:
        int d, e;

        void setData(int a1, int b1, int c1);  // Declaration
        
        void getData(){
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee manas;
    // manas.a = 134; // This line will give error, because 'a' is private variable.

    manas.d = 34; // Also check OUTPUT, when you comment
    manas.e = 89; // these two lines.

    manas.setData(1, 2, 4);
    manas.getData();

    return 0;
}