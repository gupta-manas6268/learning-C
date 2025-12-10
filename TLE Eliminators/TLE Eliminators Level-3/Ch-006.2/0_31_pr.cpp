// Correct.
// (I Saw 1st-Hint to Solve this.)

// B. Kolya and Tanya 
// https://codeforces.com/problemset/problem/584/B



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Power
int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
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
    int val = 1;
    for(int i=0; i < n; i++){
        if(i == 0){ val *= 20;}
        else{ val *= 27;}
        val %= MOD;
    }
    for(int i=0; i < n; i++){
        if(i > 0){
            val *= power(27, MOD-2);
            val %= MOD;
            val *= 7;
            val %= MOD;
        }
        ans += val;
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
}