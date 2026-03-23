// Quiz-2: Given a list of points on a 2D plane, rearrange 
//          these points int any way s.t. in final permutation
//  of points, the sum of distances of adjacent elements is
//  minimized.
//  Constraints: [N <= 15], [-1e9 <= X[i], Y[i] <= 1e9]
// 
//  Ex Points: [{0, 0}, {5, 6}, {1, 2}]
//  Best permutation -> [{0, 0}, {1, 2}, {5, 6}]
//  Ans = Dist(P1, P3) + Dist(P3, P2)
//      =     3        +   8
//      = 11





























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

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
    vector<pair<int,int>> p(n);
    for(auto &i : p){ cin >> i.first >> i.second;}

    // Solution
    vector<vector<int>> dp(n, vector<int> ((1 << n), -1));

    auto cost = [&](int i, int j) -> int {
        return abs(p[i].first - p[j].first) + abs(p[i].second - p[j].second);
    };

    //              O(n)      O(pow(2, n))
    auto f = [&](int prev, int mask, auto &&F) -> int { // O(n * pow(2, n) * n) = O(pow(n, 2) * pow(2, n))
        int index = __builtin_popcount(mask);
        if(index == n){ return 0;}
        if(dp[prev][mask] != -1){ dp[prev][mask];}

        int ans = INT_MAX;
        for(int i=0; i < n; i++){ // O(n)
            if(((1 << i) & mask) == 0){
                ans = min(ans, (index != 0 ? cost(i, prev): 0) + F(i, mask | (1 << i)), F);
            }
        }

        return dp[prev][mask] = ans;
    };

    // O/P
    cout << f(0, 0, f) << endl;
    // TC = O(pow(n, 2) * pow(2, n))
    // SC = O(n * pow(2, n))
}