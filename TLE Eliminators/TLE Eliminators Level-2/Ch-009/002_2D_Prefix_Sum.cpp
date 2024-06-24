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

    int n, m; cin >> n >> m;
    // n = no. of rows, m = no. of columns.
    vector<vector<int>> arr(n, vector<int> (m,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >>arr[i][j];
        }
    }

    vector<vector<int>> prefix_Sum(n+1, vector<int> (m+1, 0));
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            prefix_Sum[i][j] = arr[i-1][j-1] + prefix_Sum[i-1][j] + prefix_Sum[i][j-1] - prefix_Sum[i-1][j-1];
        }
    }

    int tc; cin >> tc;
    while(tc--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1++, y1++, x2++, y2++;
        cout << prefix_Sum[x2][y2]-prefix_Sum[x1-1][y2]-prefix_Sum[x2][y1-1]+prefix_Sum[x1-1][y1-1] << endl;
    }
}