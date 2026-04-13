// Correct.

// Book Shop
// https://cses.fi/problemset/task/1158




































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
    vector<int> Price(n), Pages(n);
    for(int i=0; i < n; i++){ cin >> Price[i];}
    for(int i=0; i < n; i++){ cin >> Pages[i];}

    // Solution
    vector<int> current(x + 1), next(x + 1, 0);
    // When filling (n-1)'th row, I need answers
    //  of n'th row. So, make only 2 => 1-D with SC = O(x),
    //  instead of 2-D array with SC = O(n * x).

    for(int i = (n-1); i >= 0; i--){
        for(int b = 0; b <= x; b++){
            // With space optimization
            int pick_i_index = 0, skip_i_index = 0;
            if(b >= Price[i]){
                pick_i_index = (Pages[i] + next[b - Price[i]]);
            }
            skip_i_index = next[b];
            current[b] = max(pick_i_index, skip_i_index);
        }
        next = current;
    }

    // O/P
    cout << current[x] << endl;       
    // TC => (Remains same.)
    // TC = O(n * x) => O(1e8) => (TLE)

    // SC = O(x) => O(1e5) => (Correct.)

    // Codeforces, Codechef -> 256 MB, 512 MB (Space Constraint)
    //          (i.e. can't store more than 10^7 integers.)
    //  So, Space Optimization is useful here.
    // 
    // CSES, Google competitions -> 1GB
}