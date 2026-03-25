// Quiz: No. of numbers b/w [0, 1e18] with sum of digits = 150 ?


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string num = "12";

const int N = 100;
const int MAX_SUM = 200; // MAX_SUM => of digits b/w [0, 1e18]
int dp[N][2][MAX_SUM];
int SUM = 3;

// dp[index][tight][sum_Made_Yet] = no. of no.'s we can make s.t.
//              we are on the index'th index,
// tight = tight & the sum we have made till now = sum_Made_Yet

int f(int index, int tight, int sum_Made_Yet){ 
    if(sum_Made_Yet > SUM){ return 0;}
    if(index == num.size()){
        if(sum_Made_Yet == SUM){ return 1;}
        return 0;
    }
    if(dp[index][tight][sum_Made_Yet] != -1){ return dp[index][tight][sum_Made_Yet];}

    int bound = (tight == 1 ? num[index] - '0' : 9);
    int sum = 0;
    for(int i=0; i <= bound; i++){
        sum += f(index + 1, (((tight == 1) && (i == num[index] - '0')) ? 1 : 0), i + sum_Made_Yet);
    }
    return dp[index][tight][sum_Made_Yet] = sum;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    cout << f(0, 1, 0) << endl;
    // TC = O((Digit * 2) * (Digit * 9) * 10)   (Digit => no. of Digits)
    //    <= 1e8  (For Digit <= 1000)

    // SC = O((Digit * 2) * (Digit * 9))
}