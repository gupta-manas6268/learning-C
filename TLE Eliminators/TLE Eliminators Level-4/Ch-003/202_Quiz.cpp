// 
// (This is Mentor's code. Complete this code & run it.)

// E. K Balanced Teams
// https://codeforces.com/problemset/problem/1133/E



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int f(int index, int teams_Formed, vector<vector<int>>& dp, vector<int>& idx, int n, int k){ // O(n*k)
// 2-Dimensional DP Problem
    if((index == n) || (teams_Formed == k)){ return 0;}
    if(dp[index][teams_Formed] != -1){ return dp[index][teams_Formed];}

    return dp[index][teams_Formed] = 
        max(f(index + 1, teams_Formed, dp, idx, n, k), 
            (idx[index] - index + 1) + f(idx[index] + 1, teams_Formed + 1, dp, idx, n, k));
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k; cin >> n >> k;
    vector<int> arr(n), idx(n); // idx => index
    for(auto &i : arr){ cin >> i;}

    // Solution
    sort(arr.begin(), arr.end());

    for(int i=0, j=0; i < n; i++){
        while((j < n) && ((arr[j] - arr[i]) <= 5)){
            j++;
        }
        idx[i] = (j - 1);
    }
}