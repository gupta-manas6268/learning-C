// Correct.

// B. Modular Equations
// https://codeforces.com/contest/495/problem/B
     

































     
     
#include<bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define int long long 
     
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
     
vector<int> find_factors(int n){
    vector<int> factors;
     
    for(int i=1; i*i <= n; i++){
        if(n%i == 0){
            factors.push_back(i);
    
            if((n/i) != i){
                factors.push_back(n/i);
            }
        }
    }
     
    return factors;
}
     
signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
     
    ios::sync_with_stdio(false); cin.tie(NULL);
 
    // I/P
    int a, b; cin >> a >> b;
 
    // O/P
    bool boolean_ans = false;
    int ans = 0;
    if((a-b) == 0){
        boolean_ans = true;
    }
    else if((a-b) > 0){
        vector<int> factors = find_factors(a-b);
 
        for(int i=0; i < factors.size(); i++){
            if((a % factors[i]) == b){
                ans++;
            }
        }
    }
     
    if(boolean_ans == true){
        cout << "infinity" << endl;
    }
    else{
        cout << ans << endl;
    }
}