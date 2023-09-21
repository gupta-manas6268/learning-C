#include<iostream>
using namespace std;

// Call by Value
void wrong_swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
// Call by Reference (by using pointers)
void swapPointer(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 4, b = 5;
    
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // wrong_swap(a, b); // This will not swap a and b.
    swapPointer(&a, &b); // This will swap a and b using reference variables.
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;


    return 0;
}