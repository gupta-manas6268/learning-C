// This is Part-02 of this Lecture.

// Correct.
// This is My Concept & code. So, don't Write  
//  it in Register notes.

// Distributing Apples
// https://cses.fi/problemset/task/1716
































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
    int n, m; cin >> n >> m;

    // Solution
    vector<int> fact((n+m-1) + 1);
    for(int i=0; i <= n+m-1; i++){
        if(i == 0){
            fact[i] = 1;
        }
        else{
            fact[i] = (fact[i-1] * i) % MOD; 
        }
    }
    int inv_fact_1 = power(fact[n-1], MOD-2) % MOD;
    int inv_fact_2 = power(fact[m], MOD-2) % MOD;

    int ans = (((fact[n+m-1] * inv_fact_1)%MOD) * inv_fact_2)%MOD;        

    // O/P
    cout << ans << endl;
}