// Correct.

// B. Sequence Game
// https://codeforces.com/problemset/problem/1862/B































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
        int a[n];
        for(int i=0; i<n; i++){ cin >> a[i];}

        vector<int> b;
        for(int i=0; i<n; i++){
            if(i == 0){ b.push_back(a[i]);}
            else{
                if(a[i-1] <= a[i]){
                    b.push_back(a[i]);
                }
                else{
                    b.push_back(a[i]);
                    b.push_back(a[i]);
                }
            }
        }

        int m = b.size();
        cout << m << endl;
        for(int i=0; i<m; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}