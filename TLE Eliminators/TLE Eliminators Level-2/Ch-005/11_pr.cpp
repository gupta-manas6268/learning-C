// Correct.

// A. Almost Prime
// https://codeforces.com/contest/26/problem/A


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool factor(int n){
    vector<int> facts;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            facts.push_back(i);
        }
        while(n%i == 0){
            n /= i;
        }
    }
    if(n > 1){
        facts.push_back(n);
    }

    if(facts.size() == 2){
        return true;
    }
    else{
        return false;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int ans = 0;
    for(int i=1; i <= n; i++){
        if(factor(i) == true){
            ans++;
        }
    }
    cout << ans << endl;
}