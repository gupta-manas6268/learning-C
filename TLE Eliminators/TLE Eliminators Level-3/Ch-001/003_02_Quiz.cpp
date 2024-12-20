// Wrong. (It gives wrong O/P because of line-69.)

// A. Packing Rectangles
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A





































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

    long long w, h, n; cin >> w >> h >> n;

    long long left = 0, right = 1e18;
    long long ans;
    while(left <= right){
        long long mid = (left + right)/2;

        long long a = mid/w, b = mid/h;

        // Below line gives wrong O/P.
        long long num = (a * b);
        if(num >= n){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }

    }
    cout << ans << endl;
    
}