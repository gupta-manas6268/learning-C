// Correct.

// N. Sum of a Matrix
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void sum(int row, int col, int maxRow, int maxCol, vector<vector<int>> &a, vector<vector<int>> &b){
    if(row >= maxRow){
        return;
    }
    if(col == (maxCol-1)){
        cout << (a[row][col] + b[row][col]) << endl;
        sum(row+1, 0, maxRow, maxCol, a, b);
        return;
    }
    cout << (a[row][col] + b[row][col]) << " ";
    sum(row, col+1, maxRow, maxCol, a, b);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int r, c; cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c)), b(r, vector<int>(c));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> b[i][j];
        }
    }

    sum(0, 0, r, c, a, b);
}