// Correct.

// D - Megalomania
// https://atcoder.jp/contests/abc131/tasks/abc131_d




































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
    vector<pair<int,int>> B_A;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        B_A.push_back({b,a});
    }

    // Solution
    sort(B_A.begin(), B_A.end());

    int start = 0;
    bool ans = true;
    for(int i=0; i < n; i++){
        start += B_A[i].second;
        if(start > B_A[i].first){
            ans = false; break;
        }
    }

    // O/P
    if(ans == true){ cout << "Yes" << endl;}
    else{ cout << "No" << endl;}
    // TC = O(n).
}