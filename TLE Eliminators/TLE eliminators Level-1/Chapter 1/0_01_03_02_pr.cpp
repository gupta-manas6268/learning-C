#include<iostream>
using namespace std;

int main(){
    long long int a, b;
    cin>>a>>b;
    
    int x, y;
    x = a - (a/10)*10;
    y = b - (b/10)*10;
    cout<<x+y;

    return 0;
}