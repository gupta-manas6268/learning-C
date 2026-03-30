// 
// (This is Mentor's code. Complete this code & run it.)

// F. Clear the String
// codeforces.com/contest/1132/problem/F



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// I/P
int n;
string s;
int f(int left, int right){
    if(left > right){ return 0;}
    if(dp[left][right] != -1){ return dp[left][right];}
    int ans = (1 + f(left + 1, right));
    for(int i = left+1; i <= right; i++){
        if(s[left] == s[i]){
            ans = min(ans, f(left + 1, i - 1) + f(i, right));
        }
    }

    return dp[left][right] = ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    cin >> n >> s;
}