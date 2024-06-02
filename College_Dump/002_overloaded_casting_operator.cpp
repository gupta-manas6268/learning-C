#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int real, imag;
public:
    Complex(){
        real = 0; imag = 0;
    }
    Complex(int r, int i){
        real = r; imag = i;
    }

    operator int(){
        return real;
    }
    void print(){
        cout << real << "+" << imag << "i" << endl;
    }
};

int main(){
    Complex c1(10, 20);
    c1.print();

    int realPart = c1;
    cout << "Real Part: " << realPart << endl;

    return 0;
}