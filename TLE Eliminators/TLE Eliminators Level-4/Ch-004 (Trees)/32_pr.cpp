// Correct.

// C. Queen
// https://codeforces.com/problemset/problem/1143/C




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int current_node, vector<vector<int>>& adjacency_List, int parent, vector<int>& c, vector<int>& ans){
    bool Delete = true;
    if(c[current_node] == 1){
        for(int neighour : adjacency_List[current_node]){
            if((c[neighour] == 0) && (neighour != parent)){
                Delete = false; break;
            }
        }
        if(Delete == true){
            ans.push_back(current_node);
        }
    }
    
    for(int neighour : adjacency_List[current_node]){
        if(neighour != parent){
            DFS(neighour, adjacency_List, current_node, c, ans);
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<vector<int>> adjacency_List(n+1);
    vector<int> c(n+1);
    int root = 0;
    for(int i=1; i <= n; i++){
        int parent, C; cin >> parent >> C;

        if(parent == -1){ root = i;}
        else{
            adjacency_List[i].push_back(parent);
            adjacency_List[parent].push_back(i);
        }
        c[i] = C;
    }   

    // Solution
    vector<int> ans;
    DFS(root, adjacency_List, -1, c, ans);
    sort(ans.begin(), ans.end());

    // O/P
    if(ans.size() == 0){ ans.push_back(-1);}

    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}