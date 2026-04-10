// 
// (This is Mentor's code. Complete this code.)

// Subtree Queries
// https://cses.fi/problemset/task/1137



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Debugging Checklist:
// 1. Edge cases
// 2. Overflow
// 3. Wrong loops
// 4. Something you normally repeat, etc.

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // Solution from Slide-02, Page-15. Complete this code.
    for(int i=0; i < k; i++){
        int type; cin >> type;

        if(type == 1){
            int x, y; cin >> x >> y;
            s.update(in[x], y);
            s.update(out[x], y);
        }
        else{
            int y; cin >> y;
            cout << s.query(in[y], out[y])/2 << endl;
        }
    }
}