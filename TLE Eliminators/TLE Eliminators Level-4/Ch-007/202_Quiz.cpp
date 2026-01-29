// Correct.
// (This is Mentor's code.)

// D. Social Network
// https://codeforces.com/problemset/problem/1609/D



































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
        int isSize(int i){ return size[i];};

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
                    if(rank[x] == rank[y]){ rank[y]++;}
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
    int n, d; cin >> n >> d;
    UnionFind DSU(n);
    int extra_Edges = 0;
    for(int i=0; i < d; i++){
        int a, b; cin >> a >> b;

        // Solution
        bool is_Joint = DSU.isSameSet(a, b);
        if(is_Joint == true){ extra_Edges++;}
        else{ DSU.unionSet(a, b);}

        vector<pair<int,int>> temp;
        for(int i=1; i <= n; i++){
            temp.push_back({DSU.isSize(DSU.findSet(i)), DSU.findSet(i)});
        }
        sort(temp.rbegin(), temp.rend());

        set<int> taken;
        int ans = 0;
        for(int i=0; i < n; i++){
            if(taken.find(temp[i].second) == taken.end()){
                ans += temp[i].first;
                taken.insert(temp[i].second);
            }
            if(taken.size() == (extra_Edges + 1)){ break;}
        }

        // O/P
        cout << (ans-1) << endl;
    }
    // TC = O(pow(n, 2) * log(n))
}