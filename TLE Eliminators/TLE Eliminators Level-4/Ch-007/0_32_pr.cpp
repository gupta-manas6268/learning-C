// Correct.
// (This is Mentor's code.)

// D. Nearest Excluded Points
// https://codeforces.com/problemset/problem/1651/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    // Solution
    set<pair<int,int>> points;
    map<pair<int,int>, pair<int,int>> ans;

    for(auto &p : v){ points.insert(p);}
    
    int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
    queue<pair<int,int>> q;

    // Pushing with Manhattan Distance 1
    for(int i=0; i < n; i++){ // O(n * log(n))
        for(int j=0; j < 4; j++){
            int new_x = (v[i].first + dx[j]), new_y = (v[i].second + dy[j]);
            if(points.find({new_x, new_y}) == points.end()){ // log(n)
                q.push({v[i].first, v[i].second});
                ans[{v[i].first, v[i].second}] = {new_x, new_y}; // log(n)
                break;
            }
        }
    } 

    // Mutli-Source BFS
    while(!q.empty()){ // O(n * log(n))
        auto point = q.front();
        int x = point.first, y = point.second;
        q.pop();
        for(int i=0; i < 4; i++){
            int new_x = (x + dx[i]), new_y = (y + dy[i]);
            if((!points.count({new_x, new_y})) || (ans.count({new_x, new_y}))){ // O(log(n))
                continue;
            }
            ans[{new_x, new_y}] = ans[{x, y}];
            q.push({new_x, new_y});
        }
    }

    // O/P
    for(auto it : v){
        auto point = ans[it];
        cout << point.first << " " << point.second << endl;
    }
    // TC = O(n * log(n))
    // SC = O(n)
}