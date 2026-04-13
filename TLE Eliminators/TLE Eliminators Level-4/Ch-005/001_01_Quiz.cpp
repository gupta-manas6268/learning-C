// Correct.
// (This is My logic & My code. So, no
//   need to write this code.)

// Company Queries I
// https://cses.fi/problemset/task/1687




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> curr_Ancestors;
void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<vector<pair<int,int>>>& queries, vector<int>& ans){ // O(n)
    int n = (adjacency_List.size() - 1);
    if(queries[current_Node].size() > 0){
        for(int i=0; i < queries[current_Node].size(); i++){
            int k = queries[current_Node][i].first;
            int index = queries[current_Node][i].second;
            if(curr_Ancestors.size() >= k){
                ans[index] = curr_Ancestors[curr_Ancestors.size()-k];
            }
            else{ ans[index] = -1;}
        }
    }
    
    curr_Ancestors.push_back(current_Node);
    for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
        if(neighbour != parent){
            DFS(neighbour, adjacency_List, current_Node, queries, ans);
        }
    }
    curr_Ancestors.pop_back();
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, q; cin >> n >> q;
    vector<int> p(n+1);
    p[1] = -1;
    for(int i=2; i <= n; i++){ cin >> p[i];}
    vector<pair<int,int>> queries(q);
    for(int i=0; i < q; i++){
        cin >> queries[i].first >> queries[i].second;
    }

    // Solution
    vector<vector<int>> Adjacency_List(n+1);
    for(int i=2; i <= n; i++){
        Adjacency_List[i].push_back(p[i]);
        Adjacency_List[p[i]].push_back(i);
    }

    vector<vector<pair<int,int>>> index_Queries(n+1);
    for(int i=0; i < q; i++){
        index_Queries[queries[i].first].push_back({queries[i].second, i});
    }

    int root = 1;
    vector<int> Ans(q, 0);
    DFS(root, Adjacency_List, -1, index_Queries, Ans);

    // O/P
    for(int i=0; i < q; i++){
        cout << Ans[i] << endl;
    }
    // TC = O(n)
    // SC = O(n)
}