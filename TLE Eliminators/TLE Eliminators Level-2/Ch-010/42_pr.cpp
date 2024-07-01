// Solve this Question.








// 

// AGGRCOW - Aggressive cows
// https://www.spoj.com/problems/AGGRCOW/


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
        int n, c; cin >> n >> c;
        vector<int> x;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            x.push_back(temp);
        }

        sort(x.begin(), x.end());
    }
}