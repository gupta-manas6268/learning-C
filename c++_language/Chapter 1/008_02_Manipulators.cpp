#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    // Manipulators in C++


    int a = 3, b = 78, c=12333;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<endl;

    cout<<"The value of a after setw is: "<<setw(5)<<a<<endl; // Here, "setw(4)" gives 4 spaces to 'a' in terminal. 
    cout<<"The value of b after setw is: "<<setw(5)<<b<<endl; // Here, "setw(4)" gives 4 spaces to 'b' in terminal. 
    cout<<"The value of c after setw is: "<<setw(4)<<c<<endl; // Here, "setw(4)" gives 4 spaces to 'c' in terminal. 

    return 0;
}