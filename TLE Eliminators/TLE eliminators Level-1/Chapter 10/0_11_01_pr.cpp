// 

// A. Don't Try to Count
// https://codeforces.com/contest/1881/problem/A


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;

    while (tc--){
        int n, m; cin >> n >> m;
        string x, s;  cin >> x >> s;

        vector<char> X, S;
        for(int i=0; i<n; i++){
            X.push_back(x[i]);
        }
        for(int i=0; i<m; i++){
            S.push_back(s[i]);
        }

        vector<char> :: iterator it;
        for(int i=0; i<m; i++){
            if(i == 0){
                it = find(X.begin(), X.end(), S[i]);
                if(it == X.end()){
                    cout << -1 << endl;
                    break;
                }
            }
            else{
                it += 1;
                if(S[i] == X[it[0]]){
                    
                }
            }
        }
    }
}