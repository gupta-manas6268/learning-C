#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int strlen(string s){
    int a = 0;
    
    for(int i=0; i; i++){
        if(s[i] == '\0'){break;}
        else{a++;}
    }
    return a;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s, t; cin>>s;
    int l = strlen(s);

    int a = 0, b = 0, c = 0;

    for(int i=0; i<l; i += 2){
        if(s[i] == 49){a++;}
        else if(s[i] == 50){b++;}
        else{c++;}
    }
    for(int i=0; i<l; i += 2){
        if(i % 2 != 0){
            
        }
    }
}