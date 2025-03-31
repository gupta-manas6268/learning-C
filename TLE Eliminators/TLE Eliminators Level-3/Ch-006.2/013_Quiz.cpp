// Correct.

// This is My Concept & code. So, don't Write  
//  it in Register notes.
// (But, '*' Mark this code, because I made mistake
//  of '% MOD' in this code, which Problem didn't ask.)

// C. Lucky Numbers
// https://codeforces.com/problemset/problem/630/C































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            result *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    int ans = 0;
    // for(int i=1; i <= n; i++){  // O(n)
    //     ans += power(2, i);
    // }
    ans = power(2, n+1) - 2;  // O(1).

    // O/P
    cout << ans << endl;
}