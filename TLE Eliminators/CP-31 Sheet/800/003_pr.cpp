// Solve from this Question.










// 

// A. Cover in Water
// https://codeforces.com/problemset/problem/1900/A



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
    // cout << 2 << endl;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> index;
        int i = 0;
        while(s[i] != '\0'){
            if(s[i] == '.'){
                index.push_back(i);
            }
            i++;
        }

        // for(int i=0; i < index.size(); i++){
        //     cout << index[i] << " ";
        // }
        // cout << endl;

        int ans = index.size();
        // cout << index.size() << endl;
        for(int i=0; i < (index.size() - 2); i++){
            if((index[i+2] - index[i]) == 2){
                ans = 2; 
                break;
            }
        }

        cout << 2 << endl;
    }
}