// This is Mentor's code.
// Correct.

// C. Kuroni and Impossible Calculation
// https://codeforces.com/problemset/problem/1305/C


















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

    // Pigenhole Principle :-
    //  The pigeonhole principle states that if n-items are put into
    //  m containers, with n > m, then at least one container
    //  must contain more than one item

    // for n > m , then ans = 0
    //  ( ans = ((a[i]%m - a[i+1]%m)%m) * ....... )
    //  values are repeated -> abs(a[i] - a[j]) = 0  
    //              (abs => mod(+ve part))
    //  values are not repeated -> then it's guaranteed that modulus
    //  of two values with m will be equal.


    // As,  2 <= n <= (10 ^ 5).  (10 ^ 5 = pow(10, 5))
    //      1 <= m <= 1000
    //      0 <= a[i] <= (10 ^ 9).

    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    int ans;
    if(n > m){
        ans = 0;
    }
    else{
        ans = 1;
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                ans = (ans * abs(a[i] - a[j]))% m;
                // abs => +ve part of number.
            }
        }
    }

    cout << ans << endl;
}