// Method-1: (Slide-2, Page-13)






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Height_of_Node(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& height){
    height[current_Node] = 0; // to handle leaf.
                              // 1-based indexing.

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            Height_of_Node(neighour, adjacency_List, current_Node, height);
            height[current_Node] = max(height[current_Node], 1 + height[neighour]);
        }
    }
}

void Max_Dist_As_LCA(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& height, vector<int>& max_Dist_as_LCA){
    vector<int> max_Leaves_In_Children;
    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            max_Leaves_In_Children.push_back(height[neighour]);
            Max_Dist_As_LCA(neighour, adjacency_List, current_Node, height, max_Dist_as_LCA);
        }
    }

    // 3-Cases:
    //   1. No children
    //   2. 1-children
    //   3.  >= 2-children

    if(max_Leaves_In_Children.size() == 0){ // No child
        max_Dist_as_LCA[current_Node] = 0;
    }
    else if(max_Leaves_In_Children.size() == 1){ // Only 1-child
        max_Dist_as_LCA[current_Node] = max_Leaves_In_Children[0] + 1;
    }
    else{ // >= 2 children
        sort(max_Leaves_In_Children.begin(), max_Leaves_In_Children.end());
        reverse(max_Leaves_In_Children.begin(), max_Leaves_In_Children.end());
        max_Dist_as_LCA[current_Node] = max_Leaves_In_Children[0] + max_Leaves_In_Children[1] + 2;
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
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }

    // Solution
    int root = 1;
    vector<int> height(n+1, -1); // 1-based indexing.

    vector<int> max_Dist_As_LCA(n+1, -1); // 1-based indexing.
    // (↑) stores the max. distance of a path s.t. the 
    //    current node is the LCA of that path.

    Height_of_Node(root, Adjacency_List, -1, height); // O(n)
    Max_Dist_As_LCA(root, Adjacency_List, -1, height, max_Dist_As_LCA); // O(n * log(n))

    // O/P
    int Diameter = 0;
    for(int i=1; i <= n; i++){
        Diameter = max(Diameter, max_Dist_As_LCA[i]);
    }
    cout << Diameter << endl;

    // TC = O(n * log(n))
    // SC = O(n)
}