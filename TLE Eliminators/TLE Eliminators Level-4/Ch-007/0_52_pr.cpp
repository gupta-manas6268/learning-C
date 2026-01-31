// Correct.
// (I solved it correctly Myself, but there is a  
//   minor bug which I get through Claude in Line-126.)

// C. Experience
// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/C


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class UnionFind{
    private: vector<int> parent, rank;
    public:
        UnionFind(int n){
            rank.assign(n+1, 0); parent.assign(n+1, 0);
            iota(parent.begin(), parent.end(), 0);
        }

        int findSet(int i){ return (parent[i] == i) ? i : parent[i] = findSet(parent[i]);} // O(log(n))
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);} // O(log(n))

        void unionSet(int i, int j){ // O(log(n))
            if(!isSameSet(i, j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]){ parent[y] = x;}
                else{
                    parent[x] = y;
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
    int n, m; cin >> n >> m;
    UnionFind DSU(n);
    vector<vector<pair<int, pair<int,int>>>> value(n+1); 
    vector<vector<int>> Time(n+1), prefix_Sum(n+1);
    vector<int> ans;
    for(int time = 1; time <= m; time++){
        string query; cin >> query;

        // Solution
        if(query == "add"){
            int node, temp_value; cin >> node >> temp_value;

            int u = DSU.findSet(node);
            value[u].push_back({time, {1, temp_value}});
            Time[u].push_back(time);

            int Size = prefix_Sum[u].size();
            int val = 0;
            if(Size >= 1){ val = prefix_Sum[u][Size-1];}
            prefix_Sum[u].push_back(val + temp_value);
        }
        else if(query == "join"){
            int u, v; cin >> u >> v;
            
            if(DSU.isSameSet(u, v) != true){
                int u_dash = DSU.findSet(u), v_dash = DSU.findSet(v);
                DSU.unionSet(u_dash, v_dash);
                if(DSU.findSet(u_dash) != u_dash){
                    value[u_dash].push_back({time, {2, DSU.findSet(u_dash)}});
                    Time[u_dash].push_back(time);
                }
                if(DSU.findSet(v_dash) != v_dash){
                    value[v_dash].push_back({time, {2, DSU.findSet(v_dash)}});
                    Time[v_dash].push_back(time);
                }
            }
        }
        else{
            int node; cin >> node;

            int temp_Ans = 0;
            int i = 0;
            while(i < value[node].size()){
                int Size_1 = prefix_Sum[node].size();
                if(Size_1 > 0){ // Minor bug => I get this line because of AI.
                    if(i == 0){
                        temp_Ans += prefix_Sum[node][Size_1-1];
                    }
                    else{
                        temp_Ans += (prefix_Sum[node][Size_1-1] - prefix_Sum[node][i-1]);
                    }
                }

                int Size_2 = value[node].size();
                if(value[node][Size_2-1].second.first == 2){
                    int time_2 = value[node][Size_2-1].first;    
                    node = value[node][Size_2-1].second.second;

                    i = upper_bound(Time[node].begin(), Time[node].end(), time_2) - Time[node].begin();
                }
                else{ break;}
            }
            ans.push_back(temp_Ans);
        }
    }

    // O/P
    for(int i=0; i < ans.size(); i++){ cout << ans[i] << endl;}
}