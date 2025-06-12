// This is Mentor's code.

// Correct.

// D - Coprime 2
// https://atcoder.jp/contests/abc215/tasks/abc215_d


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<long long> primeFactors(long long x){
    vector<long long> result;
    for(long long i=2; i*i <= x; i++){
        while(x%i == 0){
            x /= i;
            result.push_back(i);
        }
    }
    if(x != 1){
        result.push_back(x);
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    long long n, m; cin >> n >> m;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<long long> feasible_K(100005, 1);

    for(int i=0; i<n; i++){
        vector<long long> prime_F = primeFactors(a[i]);
        for(auto f: prime_F){
            if(feasible_K[f]){
                for(int j = f; j <= m; j += f){
                    feasible_K[j] = 0;
                }
            }
        }
    }

    int countOfFeasible_K = 0;
    for(int i=1; i <= m; i++){
        countOfFeasible_K += feasible_K[i];
    }

    cout << countOfFeasible_K << endl;

    for(int i=1; i <= m; i++){
        if(feasible_K[i]){
            cout << i << endl;
        }
    }
}