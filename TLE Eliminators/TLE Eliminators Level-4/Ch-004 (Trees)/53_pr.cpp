// Correct.

// G. Path Prefixes
// https://codeforces.com/problemset/problem/1714/G




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Current;
void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& dfs, vector<int>& a, vector<int>& b, int current_A, vector<int>& ans){ // O(n * log(n))
    dfs.push_back(current_Node); 
    current_A += a[current_Node];
    if(current_Node > 1){
        if(Current.size() == 0){
            Current.push_back(b[current_Node]);
        }   
        else{
            int temp = Current[Current.size()-1];
            Current.push_back(temp + b[current_Node]);
        }
    }

    int X = current_A;
    int index = upper_bound(Current.begin(), Current.end(), X) - Current.begin(); // O(log(n))
    ans[current_Node] = index;

    for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
        if(neighbour != parent){
            DFS(neighbour, adjacency_List, current_Node, dfs, a, b, current_A, ans);
        }
    }
    if(current_Node > 1){ Current.pop_back();}
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        vector<int> p(n+1), a(n+1), b(n+1);
        p[1] = -1; a[1] = b[1] = 0;
        for(int i=2; i <= n; i++){ cin >> p[i] >> a[i] >> b[i];}

        // Solution
        vector<vector<int>> Adjacency_List(n+1);
        for(int i=2; i <= n; i++){
            Adjacency_List[i].push_back(p[i]);
            Adjacency_List[p[i]].push_back(i);
        }

        int root = 1;
        int current_A = 0;
        vector<int> DFS_traversal; // 0-based indexing.
        vector<int> Ans(n+1);
        Ans[1] = 0;
        DFS(root, Adjacency_List, -1, DFS_traversal, a, b, current_A, Ans);

        // // O/P
        for(int i=2; i <= n; i++){
            cout << Ans[i] << " ";
        }
        cout << endl;
        // TC = O(n * log(n))
        // SC = O(n)
    }
}