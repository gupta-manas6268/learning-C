// There is no Screenshot notes in this Lecture.


#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, imaginary;
public:
    void getData(){
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }

    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};

int main(){
    // Complex c1;         // These two lines also run
    // Complex *ptr = &c1; // well
    Complex *ptr = new Complex;

    // (*ptr).setData(1, 54);
    // (*ptr).getData();

    ptr->setData(1, 54);
    ptr->getData();

    return 0;
}