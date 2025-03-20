// Correct.
//  (I don't know the basic Concept of How to Solve this
//    Problem. So, write this Code in Note-book.)

// This is Mentor's code.

// E2. Game with Marbles (Hard Version)
// https://codeforces.com/contest/1914/problem/E2
































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
        vector<pair<int,int>> a(n);
        for(auto &i : a){ cin >> i.first;}
        for(auto &i : a){ cin >> i.second;}

        // Solution

        // Exchange Argument Method.
        int ans = 0;
        
        // sort => Sort in Descending Order.
        sort(a.begin(), a.end(), [&](pair<int,int>& i, pair<int,int>& j){
            return (i.first + i.second) > (j.first + j.second);
        });

        for(int i=0; i<n; i++){
            if(i%2 == 0){ 
                ans += (a[i].first - 1);
            }
            else{
                ans -= (a[i].second - 1);
            }
        }

        // O/P
        cout << ans << endl;
    }
}