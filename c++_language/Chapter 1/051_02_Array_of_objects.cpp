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
    // Array of Objects
    Complex *ptr = new Complex[4];

    ptr->setData(11, 4);
    ptr->getData();

    return 0;
}