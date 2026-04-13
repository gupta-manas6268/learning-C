// Correct.

// Road Construction
// https://cses.fi/problemset/task/1676




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class UnionFind{
    private: vector<int> parent, rank, size;
    public:
        UnionFind(int n){
            rank.assign(n+1, 0); parent.assign(n+1, 0); size.assign(n+1, 1);
            iota(parent.begin(), parent.end(), 0);
        }

        int findSet(int i){ return (parent[i] == i) ? i : parent[i] = findSet(parent[i]);} // O(log(n))
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);} // O(log(n))
        int Size(int i){ return size[i];}

        void unionSet(int i, int j){ // O(log(n))
            if(!isSameSet(i, j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]){ 
                    parent[y] = x;
                    size[x] += size[y];
                }
                else{
                    parent[x] = y;
                    size[y] += size[x];
                    if(rank[x] == rank[y]){ 
                        rank[y]++;
                    }
                }
            }
        }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    UnionFind DSU(n);
    int CC = n, max_Size = 1;
    for(int i=0; i < m; i++){
        int a, b; cin >> a >> b;

        // Solution
        if(DSU.isSameSet(a, b) == true){
            cout << CC << " " << max_Size << endl;
        }
        else{
            DSU.unionSet(a, b);
            CC--;
            int x = DSU.findSet(a);
            max_Size = max(max_Size, DSU.Size(x));
            cout << CC << " " << max_Size << endl;
        }
    }   
}