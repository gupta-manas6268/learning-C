// 
// This is Codeforces-Tutorial code, as Mentor didn't
//  write code, only Explain Concept.

// C2. Increasing Subsequence (hard version)
// https://codeforces.com/problemset/problem/1157/C2



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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // Solution
    string ans;
    int left = 0, right = n-1;
    int last = 0;
    while(left <= right){
        vector<pair<int, char>> current;
        if(last < a[left])
    }
}