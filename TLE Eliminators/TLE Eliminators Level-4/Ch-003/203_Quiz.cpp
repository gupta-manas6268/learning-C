// 
// (This is Mentor's code. Complete this code.)

// Quiz-3: Find how many no.'s from L to R (1 <= L, R <= 1e18)
//      have odd digits at odd indices & even digits at even
//      indices. (Indexing starts from MSB(Most Significant Digit))
// (Ex: num = 12345, num = 18, Valid = Yes in both 'num')



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string digits;
vector<vector<vector<vector<int>>>>& dp;
int solve_DP(int posi, int used_Parity, bool start, bool tight){
// No. of states = (|index| * |tight| * |start| * |parity| * 10)
//                                             (No. of digits ↑)
// index = n = Size of L to R
// No. of states = (n * 2 * 2 * 2 * 10)
//               = 80 * n
// 
// So, it works for (1 <= L <= R <= pow(10, pow(10, 5)))


    // (posi => position)
    if(posi == (int)digits.size()){
        return start ? 1 : 0;
    }

    if(dp[posi][used_Parity][start][tight] != -1){
        return dp[posi][used_Parity][start][tight];
    }

    int ans = 0;
    int limit = tight ? digits[posi] : 9; // bound

    for(int d = 0; d <= limit; d++){
        bool next_Tight = (tight && (d == limit));

        if(start == 0){
            if(d == 0){
                ans += solve_DP(posi + 1, used_Parity, false, next_Tight);
            }
            else{
                bool expecting_Odd = (used_Parity - 1);
                bool digit_Is_Odd = ((d % 2) == 1);
                if(digit_Is_Odd == expecting_Odd){
                    int next_Used_Parity = (used_Parity ^ 1);
                    ans += solve_DP(posi + 1, next_Used_Parity, true, next_Tight);
                }
            }
        }
        else{
            bool expecting_Odd = (used_Parity == 1);
            bool digit_Is_Odd = ((d % 2) == 1);
            if(digit_Is_Odd == expecting_Odd){
                int next_Used_Parity = (used_Parity ^ 1);
                ans += solve_DP(posi + 1, next_Used_Parity, true, next_Tight);
        // (true means number started after trailing zeroes. ↑ )
            }
        }
    }

    return dp[posi][used_Parity][start][tight] = ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    cin >> digits;
}