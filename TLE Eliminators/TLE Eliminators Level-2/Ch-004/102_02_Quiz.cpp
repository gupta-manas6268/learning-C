// Wrong. (Gives Runtime error on test 4)

// B. Gardener and the Array
// https://codeforces.com/problemset/problem/1775/B







#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    long long n; cin >> n;
    vector<int> count(32);
    vector<vector<int>> v(n, vector<int>());
    for(int i=0; i<n; i++){
        int c; cin >> c;
        for(int j=0; j < c; j++){
            int a; cin >> a;
            count[a]++;
            v[i].push_back(a);
        }
    }
    for(int i=0; i<n; i++){
        int flag = true;
        for(auto it:v[i]){
            if(count[it] == 1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        solve();
    }
}