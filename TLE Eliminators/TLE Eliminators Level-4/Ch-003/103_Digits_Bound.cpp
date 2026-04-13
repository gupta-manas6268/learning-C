// Quiz: No. of numbers <= num ?


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string num = "12346";

const int N = 100;
int dp[N][2];

int f(int index, int tight){ // O(num_Digits * 10 * 2) = O(num_Digits) = O(log10(num))
    // (num_Digits => no._of_Digits, log10 => log with base-10)
    if(index == num.size()){
        return 1;
    }
    if(dp[index][tight] != -1){ return dp[index][tight];}

    int bound = (tight == 1 ? num[index] - '0' : 9);
    int sum = 0;
    for(int i=0; i <= bound; i++){
        sum += f(index + 1, (((tight == 1) && (i == num[index] - '0')) ? 1 : 0));
    }
    return sum;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    cout << f(0, 1) << endl;
    // TC = O(num_Digits) = O(log10(num))
}