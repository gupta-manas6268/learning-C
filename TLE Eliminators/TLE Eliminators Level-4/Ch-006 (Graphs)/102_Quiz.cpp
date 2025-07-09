// Correct.
// This is Mentor's code.

// D. Valid BFS?
// https://codeforces.com/contest/1037/problem/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> BFS(int n, vector<vector<int>> adj_List_1){
    queue<int> q;
    q.push(1);

    vector<int> ans;

    vector<int> Visited(n + 1);
    Visited[1] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        ans.push_back(node);
        for(auto child : adj_List_1[node]){
            if(Visited[child]){
                continue;
            }
            Visited[child] = 1;
            q.push(child);
        }
    }

    return ans;
}


const int N = 2e5 + 5;
vector<int> index(N);
bool comparator(int a, int b){
    return index[a] < index[b];
}


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<vector<int>> adj_List_1(n+1);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adj_List_1[u].push_back(v);
        adj_List_1[v].push_back(u);
    }
    vector<int> bfs_order(n);
    for(int i=0; i<n; i++){
        cin >> bfs_order[i];
    }

    // Solution
    for(int i=0; i < n; i++){
        index[bfs_order[i]] = i;
    }

    for(int i = 1; i <= n; i++){
        if(adj_List_1[i].size() == 0){
            continue;
        }
        sort(adj_List_1[i].begin(), adj_List_1[i].end(), comparator);
    }

    // O/P
    if(BFS(n, adj_List_1) == bfs_order){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}