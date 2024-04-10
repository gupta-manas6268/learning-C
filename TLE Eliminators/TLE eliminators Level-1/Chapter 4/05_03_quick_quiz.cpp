// This is the exact code of the mentor which is showing wrong answer. But it got accepted on mentor's side.
#include<bits/stdc++.h>
using namespace std;

#define int long long 

signed main(){
    string s, t; cin>> s >> t; t = s;
    reverse(s.begin(), s.end()); // TC of 'reverse function' = O(n).

    cout<< (s == t ? "YES": "NO") << endl;t
    
}