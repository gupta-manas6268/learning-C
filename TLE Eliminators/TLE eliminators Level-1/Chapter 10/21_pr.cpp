// Correct.

// B - Prefix and Suffix
// https://atcoder.jp/contests/abc322/tasks/abc322_b


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool prefix(int n, int m, string s, string t){
    bool ans = true;
    for(int i=0; i<n; i++){
        if(s[i] != t[i]){
            ans = false;
            break;
        }
    }
    return ans;
}

bool suffix(int n, int m, string s, string t){
    bool ans = true;
    int j = 0;
    for(int i = m-n; i <= m-1; i++){
        if(s[j] != t[i]){
            ans = false;
            break;
        }
        j++;
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    string S, T; cin >> S >> T;

    if((prefix(n, m, S, T) == true) && (suffix(n, m, S, T) == true)){
        cout << 0 << endl;
    }
    else if((prefix(n, m, S, T) == true) && (suffix(n, m, S, T) != true)){
        cout << 1 << endl;
    }
    else if((prefix(n, m, S, T) != true) && (suffix(n, m, S, T) == true)){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }
}