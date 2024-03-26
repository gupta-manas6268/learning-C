// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
public:
    void setData(int a){
        // a = a; // This line will wrong OUTPUT because both private & 
                  // setData(a) have same name, which creates conflict here.

        // 'this' is a keyword which is a pointer which points to the
        //  object which invokes the member function
        this->a = a;
    }
    void getData(){
        cout << "The value of a is: " << a << endl;
    }
};

int main(){
    A a;
    a.setData(4);
    a.getData();

    return 0;
}