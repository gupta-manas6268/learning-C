// Correct.

// A. Grasshopper on a Line
// https://codeforces.com/problemset/problem/1837/A






























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
        int x, k; cin >> x >> k;

        vector<int> moves;
        if(x%k != 0){
            moves.push_back(x);
        }
        else{
            moves.push_back(x-1);
            moves.push_back(1);
        }

        cout << moves.size() << endl;
        for(int i=0; i<moves.size(); i++){
            cout << moves[i] << " ";
        }
        cout << endl;
    }
}