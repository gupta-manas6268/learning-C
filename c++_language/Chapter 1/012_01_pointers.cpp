#include<iostream>
using namespace std;

int main(){
    //******** What is a pointer? ********
    // 
    // Ans-→ It is a data type which holds the address of
    //        other data types.

    int a=3;
    int *b;
    b = &a;
    // '&' --→ (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // '*' --→ (value at) Dereference operator
    cout<<"The value at address of b is "<<*b<<endl;
     

    return 0;
}