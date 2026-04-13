// 
// (This is Mentor's code. Complete this code.)

// Path Queries
// https://cses.fi/problemset/task/1138



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

    // Solution from Slide-02, Page-20. Complete this code.
    for(int i=1; i <= n; i++){
        euler[in[i]] = val[i - 1];
        euler[out[i]] = -val[i - 1];
    }

    SegmentTree segTree(2 * n);
    segTree.build(euler);

    while(q--){
        int type; cin >> type;
        if(type == 1){
            int x, newVal; cin >> x >> newVal;
            int diff = (newVal - val[x - 1]);
            segTree.update(in[x], diff);
            segTree.update(out[x], -diff);
            val[x - 1] = newVal;
        }
        else{
            int x; cin >> x;
            cout << segTree.query(0, in[x]) << endl;
        }
    }
}