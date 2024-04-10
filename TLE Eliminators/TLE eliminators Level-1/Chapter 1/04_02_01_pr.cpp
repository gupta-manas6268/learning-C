#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int A, B, C;
    char S, Q;

    cin>>A>>B>>C>>S>>Q;

    if(S=='+' && Q=='='){
        if(A+B==C){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<A+B<<endl;
        }
    }
    else if(S=='-' && Q=='='){
        if(A-B==C){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<A-B<<endl;
        }
    }
    else if(S=='*' && Q=='='){
        if(A*B==C){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<A*B<<endl;
        }
    }
    return 0;
}