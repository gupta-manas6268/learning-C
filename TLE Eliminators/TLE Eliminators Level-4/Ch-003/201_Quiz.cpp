// Correct.
// (This is Mentor's code.)

// Counting Tilings
// https://cses.fi/problemset/task/2181



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void generate_Transitions(int index, int mask_1, int mask_2, int n, vector<vector<int>>& transitions){ // O(m * pow(3, n))
// TC = O(pow(3, n)) (where, n <= 10), because
//  we are recursively passing this function 3-times below.

    // If index exceeds n, stop (invalid path).
    if(index > n){ return;} // Overflow

    // if we've exactly reached n, record transtion.
    if(index == n){
        transitions[mask_1].push_back(mask_2);
        return;
    }

    // Case-1: current block is "1" in mask_1
    generate_Transitions(index + 1, mask_1 | (1 << index), mask_2, n, transitions);

    // Case-2a: current block is "0" in mask_1, & "1" in mask_2
    generate_Transitions(index + 1, mask_1, mask_2 | (1 << index), n, transitions);

    // Case-2b: skip 2 blocks (like placing a horizontal domino)
    generate_Transitions(index + 2, mask_1, mask_2, n, transitions);
}

int solve_DP(int index, int mask, int n, int m, vector<vector<int>>& dp, const vector<vector<int>>& transitions){ // O(m * pow(2, n))
    if(index == m){ // Out of bound => mask should be empty
        return (mask == 0 ? 1 : 0);
    }

    if(dp[index][mask] != -1){
        return dp[index][mask];
    }

    int ans = 0;
    for(auto new_Mask : transitions[mask]){
        ans += solve_DP(index + 1, new_Mask, n, m, dp, transitions);
        ans %= MOD;
    }

    return dp[index][mask] = ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;

    // Solution
    int total_Masks = (1 << n);
    vector<vector<int>> transitions(total_Masks);

    generate_Transitions(0, 0, 0, n, transitions);
    vector<vector<int>> dp(m+1, vector<int> (total_Masks, -1));
    cout << solve_DP(0, 0, n, m, dp, transitions) << endl;
    // TC = O(m * (pow(3, n) + pow(2, n)))
}