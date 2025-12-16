// Correct.
// (I Solved it with the help of ChatGPT.)

// C. Add One
// https://codeforces.com/problemset/problem/1513/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dp((2*1e5)+35, 1);
vector<int> A(10, 0);
// Error(↓), due to deep recursion up to 2*1e5 (stack overflow).
// So, whenever Iterative DP (Line-107 to 133) is
//   possible, do it instead of Recursive DP.
// 
// void PreDefined(int times){
//     if(times == ((2*1e5)+30)){
//         return;
//     }
//     vector<int> b(10, 0);
//     for(int i=0; i <= 9; i++){
//         if(i < 9){
//             b[i+1] += A[i];
//             b[i+1] %= MOD;
//         }
//         else{
//             b[1] += A[9];
//             b[1] %= MOD;
//             b[0] += A[9];
//             b[0] %= MOD;
//         }
//     }
//     A = b;

//     dp[times] = 0;
//     for(int i=0; i <= 9; i++){
//         dp[times] += A[i];
//         dp[times] %= MOD;
//     }
//     PreDefined(times+1);
// }


int ans = 0;
void solve(vector<int>& a, int m){
    for(int i=0; i < a.size(); i++){
        int temp = (dp[a[i]+m]);
        temp %= MOD;
        ans += temp;
        ans %= MOD;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    // Pre-Calculation of DP
    A[0] = 1;
    int times = 1;
    // Iterative-DP
    while(times > 0){
        if(times == ((2*1e5)+30)){
            break;
        }
        vector<int> b(10, 0);
        for(int i=0; i <= 9; i++){
            if(i < 9){
                b[i+1] += A[i];
                b[i+1] %= MOD;
            }
            else{
                b[1] += A[9];
                b[1] %= MOD;
                b[0] += A[9];
                b[0] %= MOD;
            }
        }
        A = b;

        dp[times] = 0;
        for(int i=0; i <= 9; i++){
            dp[times] += A[i];
            dp[times] %= MOD;
        }
        times++;
    }
    
    while (tc--){
        ans = 0;
        // I/P
        int n, m; cin >> n >> m;

        // Solution
        vector<int> mp;
        while(n > 0){
            int temp = (n % 10);
            mp.push_back(temp);
            n /= 10;
        }

        solve(mp, m);
        
        // O/P  
        cout << ans << endl;
    }
}