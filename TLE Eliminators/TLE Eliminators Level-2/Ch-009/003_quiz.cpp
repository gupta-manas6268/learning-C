// Correct.
// (This is My code.)

// Forest Queries
// https://cses.fi/problemset/task/1652



































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
    int n, q; cin >> n >> q;
    vector<string> Tree(n);
    for(int i=0; i < n; i++){
        cin >> Tree[i];
    }

    // Solution
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(Tree[i][j] == '*'){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    vector<vector<int>> Prefix_Sum(n, vector<int>(n));
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(((i-1) >= 0) && ((j-1) >= 0)){
                Prefix_Sum[i][j] = (arr[i][j] + Prefix_Sum[i-1][j] + Prefix_Sum[i][j-1] - Prefix_Sum[i-1][j-1]);
            }
            else if(((i-1) == -1) && ((j-1) == -1)){
                Prefix_Sum[i][j] = (arr[i][j]);
            }
            else if((j-1) == -1){
                Prefix_Sum[i][j] = (arr[i][j] + Prefix_Sum[i-1][j]);
            }
            else{
                Prefix_Sum[i][j] = (arr[i][j] + Prefix_Sum[i][j-1]);
            }
        }
    }

    // O/P
    for(int i=0; i < q; i++){
        int y1, x1, y2, x2; cin >> y1 >> x1 >> y2 >> x2;

        x1--; y1--;
        x2--; y2--;
        int ans;
        if(((x1-1) >= 0) && ((y1-1) >= 0)){
            ans = (Prefix_Sum[y2][x2] - Prefix_Sum[y1-1][x2] - Prefix_Sum[y2][x1-1] + Prefix_Sum[y1-1][x1-1]);
        }
        else if(((x1-1) == -1) && ((y1-1) == -1)){
            ans = (Prefix_Sum[y2][x2]);
        }
        else if((y1-1) == -1){
            ans = (Prefix_Sum[y2][x2] - Prefix_Sum[y2][x1-1]);
        }
        else{
            ans = (Prefix_Sum[y2][x2] - Prefix_Sum[y1-1][x2]);
        }

        cout << ans << endl;
    }
}