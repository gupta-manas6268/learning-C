// (See Slide-1, Page-29.)

// Quiz-1: Given an array of integers (both positive 
//          and negative). Pick a subsequence of elements
//          from it such that no 2 adjacent elements
//          are picked and the sum of picked elements is 
//          maximized.




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
int n;
vector<int> a;
vector<int> dp(1e6+10, -INF);
int func(int index){
    if(index >= n){
        return 0;
    }
    if(dp[index] != -INF){
        return dp[index];
    }
    dp[index] = max(a[index] + func(index + 2), func(index + 1));
    return dp[index];
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    cin >> n;
    // (1 <= n <= 1e6)
    for(int i=0; i < n ; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    // O/P
    int ans = func(0);
    cout << ans << endl;
}