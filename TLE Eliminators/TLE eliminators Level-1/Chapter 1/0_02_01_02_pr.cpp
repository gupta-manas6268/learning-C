#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // long long sum = (long long)n*(n+1) /2;
    long long sum = 1LL * n*(n+1) /2;
    cout<<sum<<endl;

    // 1 -→ int
    // 1.0 -→ float/double
    // 1L -→ long
    // 1LL -→ long long 
    
    return 0;
}