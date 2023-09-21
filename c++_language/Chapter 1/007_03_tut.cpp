#include<iostream>

using namespace std;

int main(){
    // *********Reference Variables********

    // Rohan Das----→ Monty ----→ Rohu -----→ Dangerous Coder
    float a = 455;
    float &b = a;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}