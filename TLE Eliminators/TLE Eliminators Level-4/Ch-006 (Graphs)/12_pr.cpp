// Correct.

// Labyrinth
// https://cses.fi/problemset/task/1193




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
string Path = "";
int BFS(pair<int,int> node, vector<string>& grid, int n, int m){ // O(n + m)
    queue<pair<int,int>> q;
    q.push({node.first, node.second});
    map<pair<int,int>, pair<char, pair<int,int>>> mp;
        
    int ans = 0;
    bool is_Ans = false;

    int i_dash = -1, j_dash = -1;
    while(!q.empty()){
        queue<pair<int,int>> temp;
        ans++;
        while(!q.empty()){
            pair<int,int> u = q.front();
            q.pop();

            int i = u.first, j = u.second;
            if(i+1 < n){
                if(grid[i+1][j] == 'B'){
                    is_Ans = true; 
                    i_dash = i+1, j_dash = j;
                    mp[{i+1, j}] = {'D', {i, j}};
                    break;
                }
                else if(grid[i+1][j] == '.'){
                    temp.push({i+1, j});
                    grid[i+1][j] = '#';
                    mp[{i+1, j}] = {'D', {i, j}};
                }
            }                    
            if(i-1 >= 0){
                if(grid[i-1][j] == 'B'){
                    is_Ans = true; 
                    i_dash = i-1, j_dash = j;
                    mp[{i-1, j}] = {'U', {i, j}};
                    break;
                }
                else if(grid[i-1][j] == '.'){
                    temp.push({i-1, j});
                    grid[i-1][j] = '#';
                    mp[{i-1, j}] = {'U', {i, j}};
                }
            } 
            if(j+1 < m){
                if(grid[i][j+1] == 'B'){
                    is_Ans = true; 
                    i_dash = i, j_dash = j+1;
                    mp[{i, j+1}] = {'R', {i, j}};
                    break;
                }
                else if(grid[i][j+1] == '.'){
                    temp.push({i, j+1});
                    grid[i][j+1] = '#';
                    mp[{i, j+1}] = {'R', {i, j}};
                }
            } 
            if(j-1 >= 0){
                if(grid[i][j-1] == 'B'){
                    is_Ans = true; 
                    i_dash = i, j_dash = j-1;
                    mp[{i, j-1}] = {'L', {i, j}};
                    break;
                }
                else if(grid[i][j-1] == '.'){
                    temp.push({i, j-1});
                    grid[i][j-1] = '#';
                    mp[{i, j-1}] = {'L', {i, j}};
                }
            }
        }
        if(is_Ans == true){ break;}
        swap(q, temp);
    }

    if(is_Ans == false){ ans = -1;}
    else{
        while((i_dash != node.first) || (j_dash != node.second)){
            pair<char, pair<int, int>> Pair = mp[{i_dash, j_dash}];
            char c = Pair.first;
            Path += c;
            i_dash = Pair.second.first;
            j_dash = Pair.second.second;
        }
    }
    reverse(Path.begin(), Path.end());

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<string> adj(n);
    pair<int,int> node;
    for(int i=0; i < n; i++){
        cin >> adj[i];
        for(int j=0; j < m; j++){
            if(adj[i][j] == 'A'){ node = {i, j};}
        }
    }

    // O/P
    int ans = BFS(node, adj, n, m);
    if(ans != -1){
        cout << "YES" << endl << ans << endl << Path << endl;
    }
    else{ cout << "NO" << endl;}
    // TC = O(power(n, 2))
    // SC = O(power(n, 2))
}