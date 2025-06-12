#include<iostream>
using namespace std;

int main(){
    long long int n; // 8 bytes or 64 bits
    // Above 'n' takes extra space which we can change with less space.
    cin>>n;

    long long sum = (n*(n+1))/2;
    cout<<sum<<endl;

    return 0;
}