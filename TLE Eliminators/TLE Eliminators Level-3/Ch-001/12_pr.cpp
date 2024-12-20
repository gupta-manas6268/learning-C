// Wrong.

// Factory Machines
// https://cses.fi/problemset/task/1620






































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

    int n, t; cin >> n >> t;
    vector<int> k;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        k.push_back(temp);
    }

    int right = 1e18;
    int left = 1;
    int ans;
    while(left <= right){
        int mid = (left + right)/ 2;

        int product = 0;
        for(int i=0; i<n; i++){
            product += (mid / k[i]);
        }

        if(product >= t){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    cout << ans << endl;
}