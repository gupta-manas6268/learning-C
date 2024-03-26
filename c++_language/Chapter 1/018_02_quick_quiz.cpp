// Q.1: Write a recursive function to find nth number in
//       fibonacci series?
//        (Hint: fibonacci series--→ 1,1,2,3,5,8,13,.... ).



















#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The "<<a<<"th term in fibonacci series is "<<fibonacci(a)<<"."<<endl;

    return 0;
}