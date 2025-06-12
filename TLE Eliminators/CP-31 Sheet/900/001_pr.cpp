// Correct.

// A. Forked!
// https://codeforces.com/problemset/problem/1904/A

























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
        int a, b; cin >> a >> b;
        int Xk, Yk; cin >> Xk >> Yk;
        int Xq, Yq; cin >> Xq >> Yq;

        vector<pair<int,int>> positions;
        positions.push_back({Xk + b, Yk + a});
        positions.push_back({Xk + b, Yk - a});
        positions.push_back({Xk - b, Yk + a});
        positions.push_back({Xk - b, Yk - a});

        positions.push_back({Xk + a, Yk + b});
        positions.push_back({Xk + a, Yk - b});
        positions.push_back({Xk - a, Yk + b});
        positions.push_back({Xk - a, Yk - b});

        int ans = 0;
        for(int i=0; i<8; i++){
            int p = abs(positions[i].first - Xq);
            int q = abs(positions[i].second - Yq);

            if((p == b) && (q == a)){ ans++;}
            else if((p == a) && (q == b)){ ans++;}
        }
        if(a == b){ ans /= 2;}

        cout << ans << endl;
    }
}