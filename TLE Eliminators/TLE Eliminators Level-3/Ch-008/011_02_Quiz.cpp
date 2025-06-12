// Correct.
//  (I know the basic Concept of How to Solve this
//    Problem, but didn't know this code. So, write
//    this Code in Note-book.)

// This is Mentor's code.

// A. Duff and Weight Lifting
// https://codeforces.com/problemset/problem/587/A



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int N = 1e6+30;
int freq[N];

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    for(int i=0; i<n; i++){ 
        int x; cin >> x;
        freq[x]++;
    }

    // Solution
    int ans = 0;

    // As, (pow(2,i) + pow(2,i) = pow(2, i+1))
    for(int i=0; i+1 < N; i++){
        freq[i+1] += (freq[i]/2);
        freq[i] %= 2;

        ans += freq[i];
    }
    // ans => No. of set-bits in the sum 
    //         of pow(2, w[i]).

    cout << ans << endl;
    // TC = O(n).
    //  As, N = 1e6+30 => n (n <= 1e6).
}