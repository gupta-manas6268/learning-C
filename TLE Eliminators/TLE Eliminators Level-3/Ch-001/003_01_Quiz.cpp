// Correct.

// A. Packing Rectangles
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A









































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    long long w, h, n; cin >> w >> h >> n;
    long long left = 1, right = 1e18;
    long long ans = 1e18;
    while(left <= right){
        long long mid = (left + right) / 2;
        long long rows = mid / h;
        long long columns = mid / w;

        // To avoid overflow in 64-bit integer, we used this condition
        //  rather than ((rows * columns) >= n).
        if((columns > 0) && (rows >= (n + columns - 1) / columns)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
    // TC = log(search space) * (time to calculate f(x))
    //    = log(1e18) * O(1)
    //    = log(1e18). 
}