// Correct.

// B. Card Constructions
// https://codeforces.com/problemset/problem/1345/B

















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        vector<int> pyramid;
        for(int i=1; i<n; i++){
            int ans = 2*i + 3*(i * (i-1))/ 2;
            pyramid.push_back(ans);
            if(ans >= n){ break;}
        }

        int ans = 0;
        while(n > 1){
            int a = (n/ pyramid[pyramid.size()-1]);
            ans += a;
            n -= (a * pyramid[pyramid.size()-1]);
            pyramid.pop_back();
        }

        cout << ans << endl;
    }
}