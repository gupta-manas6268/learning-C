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

    int tc; cin >> tc;

    while (tc--){
        string s, t;
        int a = strlen(s);
        vector<int> vec;
        int digit = 0;

        while (a > 0){
            int b = a % 10;
            
            vec.push_back(a % 10);
        }
        
        if(a >= 10){

        }
    }
}