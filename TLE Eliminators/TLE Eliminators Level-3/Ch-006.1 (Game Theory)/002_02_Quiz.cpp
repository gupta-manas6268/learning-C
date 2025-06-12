// Correct.
// This is Mentor's code 
//  (Mentor used DP(Dynamic-Programming) to solve it.)

// D. World is Mine
// https://codeforces.com/problemset/problem/1987/D


































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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        set<int> temp;
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; i++){
            int p; cin >> p;
            freq[p] += 1;
            temp.insert(p);
        }

        // Solution
        int m = temp.size();
        vector<int> a(temp.begin(), temp.end());
        vector<vector<int>> DP(m+1, vector<int> (m+1, INT_MAX));
        DP[0][0] = 0;

        int max_Bob = 0;
        for(int i=0; i < m; i++){
            DP[i+1][0] = 0;
            for(int j=0; j <= i; j++){
                DP[i+1][j+1] = DP[i][j+1];
                if((DP[i][j] != INT_MAX) && ((DP[i][j] + freq[a[i]]) <= (i-j))){
                    DP[i+1][j+1] = min(DP[i][j] + freq[a[i]], DP[i+1][j+1]);
                }
                if((i == (m-1)) && (DP[i+1][j+1] != INT_MAX)){
                    max_Bob = j+1;
                }
            }
        }
        
        // O/P
        int ans = (m - max_Bob);
        cout << ans << endl;
    }
}