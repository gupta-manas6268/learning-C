// Correct.
// (This is My code.)

// F. Print Even Indices
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int index, vector<int>& arr, vector<int>& ans){
    if(index%2 == 0){ ans.push_back(arr[index]);}
    if(index == 0){ return;}
    solve(index-1, arr, ans);
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
    solve(n-1, arr, ans);

    // O/P
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}