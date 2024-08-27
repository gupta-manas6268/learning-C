// Correct.

// C - Festival
// https://atcoder.jp/contests/abc322/tasks/abc322_c





































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

    int n, m; cin >> n >> m;
    int last = 0;
    vector<pair<int,int>> vec;
    for(int i=1; i <= n; i++){
        if(last < i){
            int temp; cin >> temp;
            last = temp;

            vec.push_back({i, last});
        }
        else{
            vec.push_back({i, last});
        }
    }

    vector<int> ans;
    for(int i=0; i<n; i++){
        int Ans = (vec[i].second - vec[i].first);
        ans.push_back(Ans);
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << endl;
    }
}