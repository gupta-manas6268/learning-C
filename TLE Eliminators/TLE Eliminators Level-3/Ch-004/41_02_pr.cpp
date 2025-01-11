// 
// From [8:00] of Video Solution of this Question.

// A. Looped Playlist
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/A

























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
    int n, p; cin >> n >> p;
    vector<int> arr(2*n);
    int total_Sum = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr[i] = temp;
        arr[n+i] = temp;
        total_Sum += temp;
    }

    // O/P
    
}