#include<bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin>>w;

    int a;
    a = (w % 2 || w == 2) ? 0 : 1;
    // a = (w % 2 || w == 2) ? "YES" : "NO";

    if(a==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}