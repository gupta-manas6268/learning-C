// Find the maximum sum path in a 2d grid
//  (You can only move right or down)









#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n, m;
int grid[13][13];

int max_path(int i, int j){  // return the sum from this current point
    if(i >= n || j >= m){
        return INT_MIN;
    }
    if(i == n-1 && j == m-1){
        return grid[i][j];
    }

    return max(max_path(i+1, j), max_path(i, j+1)) + grid[i][j];
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    cout << max_path(0, 0);
}