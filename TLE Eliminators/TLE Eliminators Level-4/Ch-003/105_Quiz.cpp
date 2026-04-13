// Correct.
// (I solved this with the help of ChatGPT.)

// S - Digit Sum
// https://atcoder.jp/contests/dp/tasks/dp_s



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// I/P
string K;
int D;

// Solution
const int K_size = 1e4+5;
const int MAX_SUM = 100+5; // MAX_SUM = (9 * 1e4) % D = 100
int dp[K_size][2][MAX_SUM];

// dp[index][tight][sum_Made_Yet] = no. of no.'s we can make s.t.
//              we are on the index'th index,
// tight = tight & the sum we have made till now = sum_Made_Yet

int f(int index, int tight, int sum_Made_Yet){ 
    if(index == K.size()){
        if((sum_Made_Yet % D) == 0){ return 1;}
        return 0;
    }
    if(dp[index][tight][sum_Made_Yet % D] != -1){ return dp[index][tight][sum_Made_Yet % D];}

    int bound = (tight == 1 ? K[index] - '0' : 9);
    int sum = 0;
    for(int i=0; i <= bound; i++){
        sum += f(index + 1, (((tight == 1) && (i == K[index] - '0')) ? 1 : 0), (i + sum_Made_Yet) % D);
        sum %= MOD;
    }
    return dp[index][tight][sum_Made_Yet % D] = sum;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    // I/P
    cin >> K >> D;

    // O/P
    cout << (f(0, 1, 0) - 1 + MOD) % MOD << endl;
    //                  (↑) (-1 => To exclude 0)
}