// Lecture-1 Completed.


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int number_of_times_Function_Entered = 0;
int dp[40];
int fibonacci(int n){
    number_of_times_Function_Entered++;
    if((n == 1) || (n == 2)){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fibonacci(n-1) + fibonacci(n-2); 
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    for(int i=0; i <= n; i++){
        dp[i] = -1;
    }

    // O/P
    cout << fibonacci(n) << endl;
    cout << number_of_times_Function_Entered << endl;
    // TC = O(n)   (=> with the help of DP.)   (Correct)
    //  
    // TC = O(power(2, n))    (=> without DP.) (Wrong)  (TLE)
}