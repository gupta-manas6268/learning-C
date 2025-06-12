// TLE in Interactive problem => Idleness Limit Exceeded

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // Code - 1.
    string x;
    string a = "abc";
    cout << a;
    int x = 2;
    string b = "abc" + string(x);
    cout << b;


    // Code - 2.
    string Output = "";
    string a = "abc";
    Output += a;
    int x = 2;
    string b = "abc" + string(x);
    Output += b;
    cout << Output;


    // Code-2 is faster than Code-1.
}