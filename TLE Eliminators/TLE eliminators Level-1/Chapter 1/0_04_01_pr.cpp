#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    cin>>a>>b>>c>>d;

    e = ((a%100)*(b%100)*(c%100)*(d%100))%100;

    if(e>=10){
    cout<<e<<endl;
    }
    else{
        int f=0;
        cout<<f<<e<<endl;
    }
    return 0;
}