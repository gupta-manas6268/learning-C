// Correct.

// B. Make Almost Equal With Mod
// https://codeforces.com/problemset/problem/1909/B





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    long long n; cin >> n;
    vector<long long> v(n);
    for(auto &it: v){
        cin >> it;
    }
    for(int i=0; i <= 63; i++){
        bool flag1 = false, flag2 = false;
        for(auto it:v){
            if(it & (1LL<<i)){
                flag1 = true;
            }
            else{
                flag2 = true;
            }
        }

        if(flag1 && flag2){
            cout << (1LL << (i+1)) << endl;
            return;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        solve();
    }
}