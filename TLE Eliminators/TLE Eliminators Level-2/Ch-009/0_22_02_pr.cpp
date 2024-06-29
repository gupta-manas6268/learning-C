// Correct.
// Here, by deleting size of vector, this code works fine.

// B. Kuriyama Mirai's Stones
// https://codeforces.com/contest/433/problem/B




























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
    vector<long long> v;
    for(int i=0; i<n; i++){ 
        long long temp; cin >> temp;
        v.push_back(temp);
    }

    vector<long long> prefix_Sum1;
    prefix_Sum1.push_back(0);
    for(int i=1; i <= n; i++){
        long long temp = (v[i-1] + prefix_Sum1[i-1]);
        prefix_Sum1.push_back(temp);
    }

    sort(v.begin(), v.end());
    vector<long long> prefix_Sum2;
    prefix_Sum2.push_back(0);
    for(int i=1; i <= n; i++){
        long long temp = (v[i-1] + prefix_Sum2[i-1]);
        prefix_Sum2.push_back(temp);
    }

    int m; cin >> m;
    long long ans[m];
    for(int i=0; i<m; i++){
        int type, l, r; cin >> type >> l >> r;

        if(type == 1){
            ans[i] = (prefix_Sum1[r] - prefix_Sum1[l-1]);
        }
        else{
            ans[i] = (prefix_Sum2[r] - prefix_Sum2[l-1]);
        }
    }

    for(int i=0; i<m; i++){ cout << ans[i] << endl;}
}