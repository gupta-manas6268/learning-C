// Correct.
// (This is My code.)

// Z. Left Max
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int index, int maxi, vector<int>& arr, vector<int>& ans){
    if(index == arr.size()){ return;}

    maxi = max(maxi, arr[index]);
    ans.push_back(maxi);
    solve(index + 1, maxi, arr, ans);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++){ cin >> arr[i];}

    // Solution
    vector<int> ans;
    solve(0, arr[0], arr, ans);

    // O/P
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}