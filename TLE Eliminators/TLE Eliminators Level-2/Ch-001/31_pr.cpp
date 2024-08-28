// 

// N. Sum of a Matrix
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> Ans;
vector<int> Temporary;
void sum(vector<vector<int>> A, vector<vector<int>> B, int row, int col, int i, int j){
    Temporary.push_back(A[i][j] + B[i][j]);
    if(j == (col - 1)){
        Ans.push_back(Temporary);
        Temporary.clear();

        if(i == (row - 1)){
            return;
        }
        else{
            sum(A, B, row, col, i+1, 0);
        }
    }
    else{
        sum(A, B, row, col, i, j+1);
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int R, C; cin >> R >> C;
    vector<vector<int>> A, B;
    for(int i=0; i<R; i++){
        vector<int> temp;
        for(int j=0; j<C; j++){
            int Temp; cin >> Temp;
            temp.push_back(Temp);
        }
        A.push_back(temp);
    }
    for(int i=0; i<R; i++){
        vector<int> temp;
        for(int j=0; j<C; j++){
            int Temp; cin >> Temp;
            temp.push_back(Temp);
        }
        B.push_back(temp);
    }

    sum(A, B, R, C, 0, 0);

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout << Ans[i][j] << " ";
        }
        cout << endl;
    }
}