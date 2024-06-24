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

    int n; cin >> n;
    vector<int> v(n);
    for(auto &it:v){
        int temp; cin >> temp;
        v.push_back(temp);
    }

    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for(int i=0; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1]+v[i];
    }

    // TC = O(n).
}