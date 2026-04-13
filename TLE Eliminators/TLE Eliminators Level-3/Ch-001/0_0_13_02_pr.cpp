// Correct.
// (This is my code with the help of Mentor.)

// Multiplication Table
// https://cses.fi/problemset/task/2422




































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
    int n; cin >> n;
    
    // Solution
    int left = 1, right = (n*n);
    int ans;
    while(left <= right){
        int mid = (left + right)/2;

        int total_Values = 0;
        // 'total_Values' => It is total no. of values >= mid, 
        //              in the given multiplication table.
        for(int i=1; i<=n; i++){
            total_Values += min(n, mid/i);
        }

        if(total_Values >= ((n*n + 1)/2)){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    // O/P
    cout << ans << endl;
}