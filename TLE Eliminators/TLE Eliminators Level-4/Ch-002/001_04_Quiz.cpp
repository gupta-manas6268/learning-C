// Correct.
// (This is My code in 2nd time. I write
//   this code by seeing explanation of
//   answer in  Slide-1.)

// (So, write explaining from Slide-1, but
//  don't write code.)

// (Also, See '001_02_Knapsack_Quiz.cpp', this
//  code has something to understand & also,
//  choose whether to write '001_02_Knapsack_Quiz.cpp',
//  code or not.)

// Book Shop
// https://cses.fi/problemset/task/1158




































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
    int n, x; cin >> n >> x;
    vector<int> Price(n), Pages(n);
    for(int i=0; i < n; i++){ cin >> Price[i];}
    for(int i=0; i < n; i++){ cin >> Pages[i];}

    // Solution
    vector<int> Current(x+10, 0);
    vector<int> Next(x+10, 0);
    for(int j=0; j <= x; j++){ Next[j] = 0;}

    for(int i = n-1; i >= 0; i--){
        for(int j=0; j <= x; j++){
            Next[j] = Current[j];
            Current[j] = 0;
        }
        for(int j=1; j <= x; j++){
            int pick = 0;
            if(j >= Price[i]){
                pick = (Pages[i] + Next[j-Price[i]]);
            }
            int skip = (0 + Next[j]);
            Current[j] = max(pick, skip);
        }
    }

    // O/P
    cout << Current[x] << endl;
    // TC = O(n * x) = O(1e8)
    // SC = O(x) = O(1e5)
}