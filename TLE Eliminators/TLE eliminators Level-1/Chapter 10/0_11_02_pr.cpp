// This is Mentor's code.
// Correct.

// A. Don't Try to Count
// https://codeforces.com/contest/1881/problem/A































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool check(string &x, string &s){
    // return x.find(s) != string::npos;  // This and below line both
    return x.find(s) != -1;        // lines are same.
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;

    while (tc--){
        // Given, (n*m <= 25)
        // n -> length of x 
        // m -> length of s

        // Worst Case Operations.
        //  n = 1, m = 25
        //   In above line (n * (2 ^ 5)) > 25.
        //   So, max.(ans) = 6.

        //  n = 2, m = 12
        //  n = 3, m = 3
        //  n = 4, m = 6
        //  n = 5, m = 5

        //  n = 25, m = 1

        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;

        int ans = -1;
        for(int i=0; i <= 6; i++){
            if(check(x, s)){
                ans = i;
                break;
            }
            x += x;
        }

        cout << ans << endl;
    }
}