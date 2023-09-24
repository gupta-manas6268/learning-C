// This code shows wrong answer.
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    char s[100], t[100]; cin>>s>>t;
    int a = strlen(s);
    bool ans = true;

    for(int i=0; i<a; i++){
        if(t[i] != s[a-i-1]){ ans = false; break;}
    }

    if(ans == true){ cout<<"YES"<<endl;}

    else{ cout<<"NO"<<endl;}
}