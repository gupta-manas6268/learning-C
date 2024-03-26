// There is no screenshot notes in this Lecture.

#include<bits/stdc++.h>
using namespace std;

// CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)
// template<class T1, class T2....(COMMA SEPARATED)>
// class nameOfClass{
//   // body
// }

template<class T1, class T2>
class myClass{

public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }

    void display(){
        cout << this->data1 << endl << this->data2 << endl;
    }
};

int main(){
    myClass<int, char> object1(1, 'c');
    object1.display();
    cout << endl;

    myClass<int, float> object2(1, 1.8);
    object2.display();


    return 0;
}