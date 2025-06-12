#include<bits/stdc++.h>
using namespace std;

class c1;
class c2;

class c1{
    int value1;

    // friend void exchange(c1 &, c2 &); 
    friend void exchange(c1, c2);

    public:
        void indata(int a){
            value1 = a;
        }
        void display(void){
            cout << value1 << endl;
        }
};

class c2{
    int value2;
    // friend void exchange(c1 &, c2 &);
    friend void exchange(c1 , c2 );

    public:
        void indata(int a){
            value2 = a;
        }
        void display(void){
            cout << value2 << endl;
        }
};

// void exchange(c1 & x, c2 &y){
void exchange(c1  x, c2 y){ 
    // This function doesn't swaps the value of 'c1' & 'c2' by 
    // Call by Value.

    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();

    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}