// This is Mentor's code.
// Correct.

// C. Vasilije in Cacak
// https://codeforces.com/contest/1878/problem/C




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int sum_N(int n){
    return ((n * (n + 1)) / 2);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;

    while (tc--){
        int n, k, x; cin >> n >> k >> x;
        
        // min_Sum = sum of k smallest distinct integers in the range.
        // max_Sum = sum of k largest distinct integers in the range.

        // if (min_Sum <= x <= max_Sum) => then, (ans -> Yes).
        // else => (ans -> No).

        int min_Sum = sum_N(k);
        int max_Sum = (sum_N(n) - sum_N(n - k));

        if((min_Sum <= x) && (x <= max_Sum)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}