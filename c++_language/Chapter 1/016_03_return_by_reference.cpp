#include<iostream>
using namespace std;

int & swapReferenceVar(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return x;
}
int main(){
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    
    swapReferenceVar(a, b) = 766; 
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
   
    return 0;
}