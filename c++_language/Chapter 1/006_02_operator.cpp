#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    // '<<endl' is also used to change line in C++ ,like '\n'.
    cout<<"Following are the types of operators in C++:"<<endl;
    cout<<endl;
    cout<<endl;

    // Arithmetic operators
    cout<<"Following are the Arithmetic operators in C++:"<<endl;

    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    cout<<endl;

    // Assignment Operators --→ used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators
    cout<<"Following are the Comparison operators in C++:"<<endl;

    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    cout<<endl;

    // Logical operators
    cout<<"Following are the Logical operators in C++:"<<endl;

    cout<<"The value of logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;
    
    return 0;
}