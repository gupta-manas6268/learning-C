#include<iostream>
using namespace std;

// Call by reference using C++ reference Variables.
void swapReferenceVar(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    
    // swapReferenceVar(&a, &b); // This will swap a and b using pointer reference.
    swapReferenceVar(a, b); // This will swap a and b using reference variables.
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}