// This is the code of Class, but I don't know why this code shows wrong answer, but sir code got accepted.
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s, t; cin>> s >> t; t = s;
    reverse(s.begin(), s.end()); // TC of 'reverse function' = O(n).

    cout<< (s == t ? "YES": "NO") << endl;t
}