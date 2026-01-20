#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int node, vector<vector<int>>& adj_List_1, vector<int>& visited, vector<int>& ans){ // O(n+m)
    visited[node] = 1;
    ans.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, visited, ans);
        }
    }
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
        vector<int> a(n+1);
        for(int i=1; i <= n; i++){ cin >> a[i];}

        // Solution
        vector<vector<int>> adj(n+1);
        for(int i=1; i <= n; i++){
            if((i > a[i]) && (a[a[i]] == i)){
                continue;
            }
            adj[i].push_back(a[i]);
            adj[a[i]].push_back(i);
        }

        vector<int> visited(n+1, 0);
        vector<int> Degree;
        for(int i=1; i <= n; i++){
            if(visited[i] == 0){
                vector<int> Path;
                DFS(i, adj, visited, Path);

                int temp_degree = 0;
                for(int j=0; j < Path.size(); j++){
                    if(adj[Path[j]].size() == 1){
                        temp_degree++;
                    }
                }
                Degree.push_back(temp_degree);
            }
        }

        int maxi = Degree.size();
        int mini = 0;
        sort(Degree.begin(), Degree.end());
        stack<int> st;
        for(int i=0; i < Degree.size(); i++){
            st.push(Degree[i]);
        }

        bool Break = false;
        while(Break != true){
            if(st.top() >= 1){
                int top_1 = st.top();
                st.pop();
                if((st.empty() != true) && (st.top() >= 1)){
                    int top_2 = st.top();
                    st.pop();
                    int top = (top_1 + top_2 - 2);
                    st.push(top);
                }
                else{ 
                    st.push(top_1);
                    Break = true;
                }
            }
            else{ Break = true;}
        }
        mini = st.size();

        // // O/P
        cout << mini << " " << maxi << endl;
        // TC = O(n*log(n))
        // SC = O(n)
    }
}