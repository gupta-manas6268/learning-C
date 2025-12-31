// '102_Quiz.cpp', I code it correctly in this
//   2nd-time.

// So, No need to write code & only write Question
//   & Answer.



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
    vector<double> E(n+1, 0);
    for(int i=1; i <= n; i++){
        E[i] = ((1/2) * (3 + E[i/2] + E[i-1]));
    }

    // O/P
    cout << E[n] << endl;
    // TC = O(n)
    // SC = O(n)
}