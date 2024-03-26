// There is no screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Manas{

public:
    T1 a;
    T2 b;
    T3 c;
    Manas(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main(){
    Manas<> m1(4, 6.4, 'e');
    m1.display();
    cout << endl;

    Manas<float, char, char> m2(1.4, 'o', 'c');
    m2.display();

    return 0;
}