// Correct.

// D. Co-growing Sequence
// https://codeforces.com/problemset/problem/1547/D






































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

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> x, y;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            x.push_back(temp);
        }

        // Decimal to Binary.
        vector<vector<int>> Places;
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=0; j<30; j++){
                if(((x[i] >> j) & 1) == 1){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(0);
                }
            }
            Places.push_back(temp);
        }

        y.push_back(0);
        for(int i=1; i<n; i++){
            int temp = 0;
            for(int j=0; j<30; j++){
                if((Places[i-1][j] == 1) && (Places[i][j] == 0)){
                    temp += (1<<j);
                    Places[i][j] = 1;
                }
            }
            y.push_back(temp);
        }

        for(int i=0; i<n; i++){
            cout << y[i] << " ";
        }
        cout << endl;
    }
}