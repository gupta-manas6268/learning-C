// 

// Labyrinth
// https://cses.fi/problemset/task/1193



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string ans;
bool is_Ans = false;
void Path(int n, int m, vector<string>& grid, vector<vector<int>>& Visited, pair<int,int>& Coordinates, string temp_ans){
    Visited[Coordinates.first][Coordinates.second] = 1; // Visited
    if(grid[Coordinates.first][Coordinates.second] == 'B'){
        ans = temp_ans;
        is_Ans = true;
    }

    if(is_Ans != true){
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        char step[] = {'U', 'D', 'L', 'R'};

        for(int i=0; i < 4; i++){
            if(is_Ans == true){ break;}

            pair<int,int> New_Coor = {Coordinates.first + dx[i], Coordinates.second + dy[i]};
            if((Coordinates.first < n) && (Coordinates.second < m)){
                if(Visited[New_Coor.first][New_Coor.second] == 0){
                    if((grid[New_Coor.first][New_Coor.second] == '.') || ((grid[New_Coor.first][New_Coor.second] == 'B'))){
                        string Temp_ans = (temp_ans + step[i]);
                        Path(n, m, grid, Visited, New_Coor, Temp_ans);
                    }
                }
            }
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
    vector<string> grid;
    pair<int,int> A;
    for(int i=0; i < n; i++){
        string temp_Vec; cin >> temp_Vec;
        for(int j=0; j < m; j++){
            if(temp_Vec[j] == 'A'){
                A = {i, j};
            }
        }
        grid.push_back(temp_Vec);
    }

    // Solution
    vector<vector<int>> Visited;
    for(int i=0; i < n; i++){
        vector<int> temp(m);
        for(int j=0; j < m; j++){
            temp[j] = 0;
        }
        Visited.push_back(temp);
    }
    Path(n, m, grid, Visited, A, "");

    // O/P
    if(is_Ans == true){
        cout << "YES" << endl;
        cout << ans.length() << endl;
        cout << ans << endl;
    }
    else{ cout << "NO" << endl;}
}