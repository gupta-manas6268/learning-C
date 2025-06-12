// Correct.

// Vacation
// https://www.codechef.com/practice/course/zco-inoi-problems/ZCOPRAC/problems/ZCO22001





























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
    vector<vector<int>> cost;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int Temp; cin >> Temp;
            temp.push_back(Temp);
        }
        cost.push_back(temp);
    }

    vector<vector<int>> prefix_Sum(n+1, vector<int> (m+1, 0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            prefix_Sum[i][j] = cost[i-1][j-1] + prefix_Sum[i-1][j] + prefix_Sum[i][j-1] - prefix_Sum[i-1][j-1];
        }
    }

    int Q; cin >> Q;
    int ans[Q];
    for(int i=0; i<Q; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int Cost = prefix_Sum[x2][y2] - (prefix_Sum[x2][y1-1] + prefix_Sum[x1-1][y2]) + prefix_Sum[x1-1][y1-1];
        if(Cost == ((x2-x1+1) * (y2-y1+1))){ ans[i] = 1;}
        else{ ans[i] = 0;}
    }

    for(int i=0; i<Q; i++){
        cout << ans[i] << endl;
    }
}