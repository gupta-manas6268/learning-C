#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // I did not know why this code didn't work in codeforces, as it is from DR session.

    long long a, b, c;
    char s, q;

    cin>>a>>b>>c>>s>>q;
    // Now we have to see if lhs == rhs.

    long long lhs;
    if(s=='+'){
        lhs = a + b;
    }
    else if(s=='-'){
        lhs = a - b;
    }
    else if(s=='*'){
        lhs = a * b;
    }

    long long rhs = c;
    if(lhs == rhs){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<lhs<<endl;
    }
    
}