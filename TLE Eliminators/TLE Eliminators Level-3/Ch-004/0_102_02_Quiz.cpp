// Correct.
// This is Mentor's code.

// E. Knapsack on a Segment
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/E



































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
    int n, W; cin >> n >> W;
    vector<int> w(n), c(n);
    for(auto &i:w){ cin >> i;}
    for(auto &i:c){ cin >> i;}

    // O/P
    int weight = 0, profit = 0, ans = 0;
    for(int left = 0, right = 0; right < n; right++){
        weight += w[right];
        profit += c[right];

        while(weight > W){
            weight -= w[left];
            profit -= c[left];
            left++;
        }

        ans = max(ans , profit);
    }

    cout << ans << endl;
}