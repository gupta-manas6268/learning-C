// Quiz-1: Given an array of N (input) 3s, 5s and 
//          ?s. Evey index with contains a 3 will
//          have a score of X (given in input) and 
//          every index that contains a 5 will have 
//   a score of Y (given in input). Find the maximum 
//   score you can get by replacing each question mark 
//   with a 3 or a 5 such that you cannot use more 
//   than k1 (given in input) 3s and k2 (given in 
//   input) 5s in the complete array.



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
    int n; cin >> n;
    // Complete Input


    // Solution
    vector<vector<vector<int>>> dp(n, vector<vector<int>> (n, vector<int> (n, -1)));

    auto f = [&](int index, int threes, auto &&F) -> int {
        int fives = (index - threes);
        if(index == n){ return 0;}
        if(dp[index][threes][fives] != -1){ return dp[index][threes][fives];}

        if(arr[index] != '?'){
            return (arr[index] == '3' ? three[index] : five[index]);
            F(index + 1, threes + (arr[index] == '3'), fives + (arr[index] == '5'), F);
        }

        int answer = -1e8;
        if(threes < k1){
            answer = max(answer, three[index] + F(index + 1, threes + 1, fives, F));
        }
        if(fives < k2){
            answer = max(answer, five[index] + F(index + 1, threes, fives + 1, F));
        }

        return dp[index][threes][fives] = answer;
    };

    // O/P
    cout << f(0, 0, f) << endl;
    // TC = O(power(n, 2))  (Correct)
    // SC = O(power(n, 2))  (Correct)
}