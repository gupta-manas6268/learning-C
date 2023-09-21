#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a, b;
    char s;
    cin>>a>>s>>b;

    if(s=='<'){
        if(a<b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    else if(s=='>'){
        if(a>b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    else if(s=='='){
        if(a==b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }

}