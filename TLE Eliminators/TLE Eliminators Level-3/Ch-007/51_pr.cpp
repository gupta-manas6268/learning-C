// Correct.

// A. Chat room
// https://codeforces.com/problemset/problem/58/A




































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

    string s; cin >> s;
    int j = 0;
    string t = "hello";
    bool ans = false;
    for(int i=0; i < s.length(); i++){
        if(s[i] == t[j]){
            if(j == 4){
                ans = true; break;
            }
            else{
                j++;
            }
        }
    }

    if(ans == true){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}
}