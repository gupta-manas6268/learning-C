// Correct.
// See line-55 to 61.

// C. Valera and Elections
// https://codeforces.com/problemset/problem/369/C




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

map<int,int> Problem_Roads;
vector<int> current_Problems;
vector<int> ans;

// 'Problem_Roads' map is outside function, because inside of function
//  it's values aren't changing.

// Here, in 'DFS' function I make only 3-Parameters in function & all
//     other Parameters I make Global-Variables, because it reduces SC,
//     i.e. whenever possible make less parameters in function 
//         to reduce Space Complexity (to avoid MLE (Memory LE))
void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent){
    int key_1 = current_Node + (parent * (1e5 + 1));
    int key_2 = parent + (current_Node * (1e5 + 1));
    if(Problem_Roads[key_1] == 2){
        current_Problems.push_back(key_1);
        current_Problems.push_back(key_2);
    }

    for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
        if(neighbour != parent){
            DFS(neighbour, adjacency_List, current_Node);
        }
    }

    int key = current_Node + (parent * (1e5 + 1));
    if(Problem_Roads[key] == 2){ // Problem
        ans.push_back(current_Node);
        for(int i=0; i < current_Problems.size(); i++){
            Problem_Roads[current_Problems[i]] = 1;
        }
        current_Problems.clear();
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
    vector<vector<int>> Adjacency_List(n+1);

    int Root_Key_1 = 1 + (-1 * (1e5 + 1));
    Problem_Roads[Root_Key_1] = 1;
    int Root_Key_2 = -1 + (1 * (1e5 + 1));
    Problem_Roads[Root_Key_2] = 1;

    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.
        int is_Problem; cin >> is_Problem;

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 

        int key_1 = u + (v * (1e5 + 1));
        Problem_Roads[key_1] = is_Problem;
        int key_2 = v + (u * (1e5 + 1));
        Problem_Roads[key_2] = is_Problem;
    }
    
    // Solution
    int root = 1;
    DFS(root, Adjacency_List, -1);

    // O/P
    cout << ans.size() << endl;
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    // TC = O(n).
    // SC = O(n).
}