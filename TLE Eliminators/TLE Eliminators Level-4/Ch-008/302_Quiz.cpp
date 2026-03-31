// Correct.
// (This is Mentor's code.)

// C. Fox And Names
// https://codeforces.com/problemset/problem/510/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
vector<int> get_Topo_Sort(vector<vector<int>>& adj){
    constexpr int obi = 0; // 1-based indexing
    int n = (adj.size() - obi);
    vector<int> in_degree(n + obi), topo;
    queue<int> q;
    for(int u = obi; u < (n + obi); u++){
        for(int v : adj[u]){ in_degree[v]++;}
    }
    for(int u = obi; u < (n + obi); u++){
        if(!in_degree[u]){ q.push(u);}
    }
    while(!q.empty()){
        int u = q.front();
        q.pop();
        topo.push_back(u);
        for(int v : adj[u]){
            if(--in_degree[v] == 0){ q.push(v);}
        }
    }

    return topo.size() == n ? topo : vector<int>();
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<string> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    vector<vector<int>> adj(26);
    bool ans = true;
    for(int i=0; i < n-1; i++){
        bool diff = false;
        for(int j=0; j < min(a[i].size(), a[i+1].size()); j++){
            if(a[i][j] != a[i+1][j]){
                adj[a[i][j] - 'a'].push_back(a[i+1][j] - 'a');
                diff = true;
                break;
            }
        }

        // If 1st string & 2nd string are same, and 
        //  1st string lenght > than of 2nd string.
        if((!diff) && (a[i].size() > a[i+1].size())){
            ans = false;
        }
    }

    // O/P
    vector<int> topo = get_Topo_Sort(adj);
    if((ans == false) || (topo.empty())){
        cout << "Impossible" << endl;
    }
    else{
        for(int i=0; i < 26; i++){
            cout << char(topo[i] + 'a');
        }
    }
}