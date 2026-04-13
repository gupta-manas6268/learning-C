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
    for(auto &it:v){ cin >> it;}

    vector<int> prefix_sum(n);
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j <= i; j++){
            sum += v[j];
        }
        prefix_sum[i] = sum;
    }

    // TC = O(pow(n,2)).
}