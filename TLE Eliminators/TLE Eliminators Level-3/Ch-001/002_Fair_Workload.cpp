#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool possible(int x, vector<int> &a, int k){
    int used_Workers = 1;
    int current_Workers_Workload = 0;
    int n = a.size();

    for(int i=0; i<n; i++){
        if(a[i] > x){
            return false;
        }
        if(a[i] + current_Workers_Workload <= x){
            current_Workers_Workload += a[i];
        }
        else{
            used_Workers++;
            current_Workers_Workload = 0;
            current_Workers_Workload += a[i];
        }
    }
    if(used_Workers <= k){
        return true;
    }
    else{
        return false;
    }
}

void solve(){
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 17, 19};
    int n = arr.size();
    
    int left = 0;    // max of array.
    int right = 1e6; // sum of all elements.

    int ans = 1e6;
    int k, end, start;
    while(left <= right){
        int mid = (left + right) / 2;
        if(possible(mid, arr, k)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout << ans << endl;

    // TC = O(log(Sum of array) * n).
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}