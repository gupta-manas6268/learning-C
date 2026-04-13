// Wrong.
// (This is My 2nd time code.)

// Subarray Sums II
// https://cses.fi/problemset/task/1661



































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

    // I/P
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    vector<int> Prefix_Sum(n);
    for(int i=0; i < n; i++){ // O(n)
        if(i == 0){
            Prefix_Sum[i] = a[i];
        }
        else{
            Prefix_Sum[i] = (Prefix_Sum[i-1] + a[i]);
        }
    }
    sort(Prefix_Sum.begin(), Prefix_Sum.end()); // O(n * log(n))

    int ans = 0;
    for(int i = -1; i < n; i++){ // O(n * log(n))
        int target;
        if(i == -1){
            target = x;
        }
        else{
            target = (Prefix_Sum[i] + x);
        }

        int lb, ub;
        if(i >= 0){
            lb = lower_bound(Prefix_Sum.begin()+i+1, Prefix_Sum.end(), target) - Prefix_Sum.begin();
            ub = upper_bound(Prefix_Sum.begin()+i+1, Prefix_Sum.end(), target) - Prefix_Sum.begin();
        }
        else{
            lb = lower_bound(Prefix_Sum.begin(), Prefix_Sum.end(), target) - Prefix_Sum.begin();
            ub = upper_bound(Prefix_Sum.begin(), Prefix_Sum.end(), target) - Prefix_Sum.begin();
        }

        ans += (ub - lb);
    }

    // O/P
    cout << ans << endl;
    // TC = O(n * log(n))
}