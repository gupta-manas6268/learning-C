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

    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc;

    while (tc--){
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        vector<int> index;
        for (int i = 0; i < n; ++i){
            if (s[i] == '.'){
                index.push_back(i);
            }
        }

        // for (int i = 0; i < index.size(); ++i){
        //     cout << index[i] << " ";
        // }
        // cout << endl;

        int ans = index.size();
        for (int i = 0; i < (index.size() - 2); ++i){
            if ((index[i + 2] - index[i]) == 2){
                ans = 2; 
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
