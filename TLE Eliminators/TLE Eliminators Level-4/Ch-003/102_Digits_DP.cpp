#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n = 15;
const int N = 30;
int dp[N];

// f[i] = no. of ways s.t. we can make no.'s from i'th
//      digits till d-1'th digit.
int func(int index, int n){ // O(n * 10) = O(n)
    if(index == n){
        return 1;
    }
    if(dp[index] != -1){ return dp[index];}

    int sum = 0;
    for(int i=0; i <= 9; i++){
        sum += func(index+1, n);
    }
    
    return dp[index] = sum;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    memset(dp, -1, sizeof(dp));
    // Put all values in dp-array to -1
    
    cout << func(0, n) << endl;
}