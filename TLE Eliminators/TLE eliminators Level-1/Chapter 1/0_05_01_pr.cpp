#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // a^b , c^d
    // log(a^b) , log(c^d)
    // b * log(a), d* log(c)
    // b*log(a), d* log(c)
    
    long long int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(b * log(a) > d * log(c)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}