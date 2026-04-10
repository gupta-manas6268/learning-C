// 
// (This is Mentor's code. Complete this code.)

// (In Slide-02, Page-22.)
// Node to Node Sum Queries:
// You are given a rooted tree consisting of n nodes, numbered from 1 to n ,
// where node 1 is the root. Each node has an associated value.
// Your task is to process the following types of queries efficiently:
// 1. Update Query: Change the value of node s to x .
// 2. Path Sum Query: Compute the sum of values on the path between
// two nodes a and b .




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

    int q; cin >> q; 

    // Solution from Slide-02, Page-25. Complete this code.
    while(q--){
        int type; cin >> type;
        if(type == 1){
            int s, x; cin >> s >> x;
            val[s] = x;
            // in => in_Time, out => out_Time
            seg.update(in[s], x);
            seg.update(out[s], -x);
        }
        else{
            int a, b; cin >> a >> b;
            int lca = getLCA(a, b);
            int sum_A = seg.query(0, in[a]);
            int sum_B = seg.query(0, in[b]);
            int sum_LCA = seg.query(0, in[lca]);
            int ans = (sum_A + sum_B - (2 * sum_LCA) + val[lca]);
            cout << ans << endl;
        }
    }
}