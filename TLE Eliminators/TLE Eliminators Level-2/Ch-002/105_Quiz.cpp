// Correct.
// (This is My code.)

// U. Knapsack 
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans = 0;
void solve(int index, vector<int>& w, vector<int>& v, int W, int curr_weight, int curr_val){
    if(index == w.size()){ return;}
    if(curr_weight > W){ return;}

    curr_weight += w[index];
    curr_val += v[index];
    if(curr_weight <= W){
        ans = max(ans, curr_val);
    }
    // cout << ans << endl;

    solve(index + 1, w, v, W, curr_weight, curr_val);
    curr_weight -= w[index];
    curr_val -= v[index];
    solve(index + 1, w, v, W, curr_weight, curr_val);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int N, W; cin >> N >> W;
    vector<int> w(N), v(N);
    for(int i=0; i < N; i++){ cin >> w[i] >> v[i];}

    // Solution
    solve(0, w, v, W, 0, 0);

    // O/P
    cout << ans << endl;
}