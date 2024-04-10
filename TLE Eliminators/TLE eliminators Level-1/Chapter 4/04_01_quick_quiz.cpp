// Q.4: codeforces.com/problemset/problem/281/A



// This code shows compilation error.
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    char *s; cin>>s;
    int a = strlen(s);

    char t[a];

    if(s[0] >= 97){
        t[0] = s[0] - 32;
    }
    else{
        t[0] = s[0];
    }

    for(int i=1; i <= a-1; i++){
        t[i] = s[i];
    }

    for(int i=0; i<a; i++){
        cout<<t[i];
    }
    cout<<endl;
}