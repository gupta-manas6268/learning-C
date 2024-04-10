#include<bits/stdc++.h>
using namespace std;

int main(){
    char a, b;
    cin>>a;

    // if(a>=97 && a<=122){
    if(a>='a' && a<='z'){
        b = a - 32;
        cout<<b<<endl;
    }
    // else if(a>=65 && a<=90){
    else if(a>='A' && a<='Z'){
        b = a + 32;
        cout<<b<<endl;
    }

    return 0;
}