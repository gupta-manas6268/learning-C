// Wrong.

// This is Mentor's code and it is working fine on 
//  Mentor's codefores, but it is giving me 
//  wrong answer.


// C. Perfect Square
// https://codeforces.com/contest/1881/problem/C











#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        
        vector<vector<int>> a(n, vector<int> (n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                char ch; cin >> ch;
                a[i][j] = (ch - 'a');
            }
        }

        // Here, after 90 degree CW rotation,
        //   (i, j) => (j, n-1-i). 
        int ans = 0;
        for(int i=0; i < (n/2); i++){
            for(int j=0; j < (n/2); j++){
                int ii = (n-1-i), jj = (n-1-j);
                int mx = max({a[i][j], a[j][ii], a[ii][jj], a[jj][i]});
                int sum = (a[i][j] + a[j][ii] + a[ii][jj] + a[jj][i]);
                ans = (4*mx - sum);
            }
        }

        cout << ans << endl;
    }
}