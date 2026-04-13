// Correct.

// C. News Distribution
// https://codeforces.com/contest/1167/problem/C




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Visited((5*1e5) + 10, 0);
void DFS(int node, vector<vector<int>>& adj_List_1, vector<int>& ans){ // O(n)
    Visited[node] = 1;
    ans.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(Visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, ans);
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
    int n, m; cin >> n >> m;
    vector<vector<int>> adj_List_1(n+1);
    for(int i=0; i < m; i++){
        int k; cin >> k;
        int a;
        for(int i=0; i < k; i++){
            if(i == 0){
                int temp; cin >> temp;
                a = temp;
            }
            else{
                int temp; cin >> temp;
                adj_List_1[a].push_back(temp);
                adj_List_1[temp].push_back(a);

                a = temp;
            }
        }
    }

    // Solution
    vector<vector<int>> Connected_Ans;
    for(int i=1; i <= n; i++){
        if(Visited[i] == 0){
            vector<int> temp_ans;
            DFS(i, adj_List_1, temp_ans);

            Connected_Ans.push_back(temp_ans);
        }
    }

    vector<int> ans(n+1);
    for(int i=0; i < Connected_Ans.size(); i++){
        vector<int> temp = Connected_Ans[i];
        for(int j=0; j < temp.size(); j++){
            ans[temp[j]] = temp.size();
        }
    }

    // O/P
    for(int i=1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}