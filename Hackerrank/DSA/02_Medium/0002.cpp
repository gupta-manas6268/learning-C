// 

// Forming a Magic Square
// https://www.hackerrank.com/challenges/magic-square-forming/problem?isFullScreen=true



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

    
}




long sumXor(long n) {
    int ans = 0;
    for(int i=0; i <= n; i++){
        if((n + i) == (n ^ i)){
            ans++;
        }
    }

    return ans;
}