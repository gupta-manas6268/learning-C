#include<iostream>
using namespace std;

int main(){
    // range of "int".
    int x = INT_MAX, y = INT_MIN;
    // 'INT_MAX' is maximum value of int & 'INT_MIN' is minimum value of int.

    cout<<x<<endl;
    cout << x + 1 <<endl; // overflow
    cout<<x + 2<<endl; // x + 2 = min + 1.

    cout<<y<<endl;
    cout << y - 1 <<endl; // overflow
    cout<<y-2<<endl;  // y - 2 = max -1.

    // range of "long long int". 
    cout<<LLONG_MAX<<endl;
    cout<<LLONG_MIN<<endl;

    return 0;
}