// Correct.

// A. Reverse a Substring
// https://codeforces.com/problemset/problem/1155/A






































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

    int n; cin >> n;
    string s; cin >> s;

    bool ans = false;
    int left, right;
    for(int i=0; i < (n-1); i++){
        if(s[i] > s[i+1]){
            ans = true;
            left = (i+1);
            right = (i+2);
            break;
        }
    }

    if(ans == true){
        cout << "YES" << endl;
        cout << left << " " << right << endl;
    }
    else{
        cout << "NO" << endl;
    }
}