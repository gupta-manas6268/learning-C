// Quiz-1: 1 L R X -> Add X to all elements from L to R.
//         2 L R   -> Return the min. of all elements from L to R.





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


// Solution
struct segment_Tree {
    int n;
    vector<int> sgt, lazy;

    void init(int _n){ // init => initialize function
        this->n = _n;
        sgt.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
    }

    // Changed (↓)
    int combine(int a, int b){
        return min(a, b);
    }
    void push(int start, int end, int node){ // O(1)
    // It just pushes update 1-level down.
        if(lazy[node]){
            sgt[node] += lazy[node];
            
            if(start != end){
                lazy[(2 * node) + 1] += lazy[node];
                lazy[(2 * node) + 2] += lazy[node];
            }
            
            lazy[node] = 0;
        }
    }
    // Changed (↑)
    
    void build(int start, int end, int node, vector<int>& v){
        if(start == end){
            sgt[node] = v[start];
            return;
        }
        
        int mid = (start + end)/ 2;
        build(start, mid, (2 * node) + 1, v);
        build(mid + 1, end, (2 * node) + 2, v);
        sgt[node] = combine(sgt[(2 * node) + 1], sgt[(2 * node) + 2]);
    }
    
    int query(int start, int end, int l, int r, int node){
    // (l => left, r => right)
        push(start, end, node);

        if((start > r) || (end < l)){ return 0;}
        if((start >= l) && (end <= r)){ return sgt[node];}

        int mid = (start + end)/ 2;
        int q1 = query(start, mid, l, r, (2 * node) + 1);
        int q2 = query(mid + 1, end, l, r, (2 * node) + 2);

        return combine(q1, q2);
    }

    void update(int start, int end, int node, int l, int r, int value){ // O(log(n))
        push(start, end, node);

        if((start > r) || (end < l)){ return;}
        if((start >= l) && (end <= r)){
            lazy[node] = value;
            push(start, end, node);
            return;
        }

        int mid = (start + end)/ 2;
        update(start, mid, (2 * node) + 1, l, r, value);
        update(mid + 1, end, (2 * node) + 2, l, r, value);
        sgt[node] = combine(sgt[(node * 2) + 1], sgt[(node * 2) + 2]);
    }

    void build(vector<int>& v){
        build(0, n-1, 0, v);
    }
    int query(int l, int r){
        return query(0, n-1, l, r, 0);
    }

    void update(int l, int r, int x){
        update(0, n-1, 0, l, r, x);
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        
    }
}