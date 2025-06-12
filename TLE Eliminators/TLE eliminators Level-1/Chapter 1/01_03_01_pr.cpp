#include<iostream>
using namespace std;

int main(){
    long long int a, b;
    cin>>a>>b;
    
    int x, y;
    x = a%10;
    y = b%10;

    cout<<x+y;

    return 0;
}