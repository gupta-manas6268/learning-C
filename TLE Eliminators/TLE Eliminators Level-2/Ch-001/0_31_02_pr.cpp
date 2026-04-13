// Correct 
// (This is My code.)

// N. Sum of a Matrix
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N





































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Sum(int i, int j, int R, int C, vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& X){
    if((i == R) || (j == C)){
        if(i == R){
            Sum(0, j+1, R, C, A, B, X);
        }
        if(j == C){ return;}
    }
    else{
        X[i][j] = (A[i][j] + B[i][j]);
        Sum(i+1, j, R, C, A, B, X);
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int R, C; cin >> R >> C;
    vector<vector<int>> A, B;
    for(int i=0; i < R; i++){
        vector<int> temp(C);
        for(int j=0; j < C; j++){ cin >> temp[j];}
        A.push_back(temp);
    }
    for(int i=0; i < R; i++){
        vector<int> temp(C);
        for(int j=0; j < C; j++){ cin >> temp[j];}
        B.push_back(temp);
    }

    // Solution
    vector<vector<int>> X(R);
    for(int i=0; i < R; i++){
        vector<int> temp(C, 0);
        X[i] = temp;
    }

    Sum(0, 0, R, C, A, B, X);

    // O/P
    for(int i=0; i < R; i++){
        for(int j=0; j < C; j++){
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
}