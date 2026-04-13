// Correct.
// This is Mentor's code.
// (This Problem didn't use Sliding-Window.)

// (Hint: It uses Binary-Search.)

// C. Set or Decrease
// https://codeforces.com/problemset/problem/1622/C
































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool ok(int operations, vector<int>& a, int max_Sum, int sum){
    if((sum - operations) <= max_Sum){ return true;}

    for(int i = a.size() - 1; i >= max(1ll, (int)a.size() - operations); i--){
        sum -= a[i];
        int operations_Left = operations - (a.size() - i);
        int temp_Sum = sum - a[0] + (a.size() - i + 1) * (a[0] - operations_Left);
        if(temp_Sum <= max_Sum){ return true;}
    }

    return false;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a){ cin >> i;}

        // Solution
        sort(a.begin(), a.end());

        int left = 0, right = 1e10, ans = 1e10;
        int sum = accumulate(a.begin(), a.end(), 0ll);

        // Binary-Search
        while(left <= right){
            int mid = (left + right) / 2;

            if(ok(mid, a, k, sum)){
                ans = mid;
                right = mid - 1;
            }
            else{ left = mid + 1;}
        }

        // O/P
        cout << ans << endl;
        // TC = O(n * log(n)).
        // SC = O(n).
    }
}