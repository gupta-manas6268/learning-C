// 

// C. Palindrome Free Strings     (=> Problem C)
// https://zibada.guru/gcj/ks2022a/problems/#C



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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        string S; cin >> S;

        // Solution

        // Recursive DP => Better, when there are Lot of useless states.

        vector<map<string,int>> dp(n);

        auto shorten = [&](string s) -> string{ // Returns last 6-characters
            if(s.size() <= 6){ return s;}       //  only.
            return string(s.end()-6, s.end());
        };
        auto checkPalindrome = [&](string s) -> bool{
            if(s.size() < 5){ return false;}
            bool palindrome = true;
            for(int i=0; i < s.size(); i++){
                palindrome &= (s[i] == s[s.size()-1-i]);
            }
            if(s.size() == 6){
                bool check = true;
                for(int i=1; i < s.size(); i++){
                    check &= (s[i] == s[s.size() - 1 - (i-1)]);
                }
                if(check){ return true;}
            }
            return palindrome;
        };

        // Recursive DP
        auto f = [&](int index, string s, auto &&F) -> bool{
            s = shorten(s);  // Last 6-characters only
            if(checkPalindrome(s)){ return false;}
            // (↑) Checking 5 & 6 length Palindrome.
            if(index == n){ return true;}

            if(dp[index].count(s)){ return dp[index][s];}
            // dp[index] (↑) => map/unordered_map where keys are strings.
            // dp[index].count(s) => Checks if string 's' has already
            //              been computed for this index or not.
            // If true(1), I already solved this subproblem, so return
            //    result.

            if(S[index] != '?'){
                return dp[index][s] = F(index + 1, s + S[index], F);
            }
            return dp[index][s] = F(index + 1, s + "1", F) || F(index + 1, s + "0", F);
        };

        // O/P
        if(f(0, "", f)){ cout << "Possible" << endl;}
        else{ cout << "Impossible" << endl;}
    }
}