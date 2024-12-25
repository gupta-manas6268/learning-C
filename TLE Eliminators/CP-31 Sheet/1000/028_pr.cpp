// Correct.

// C. Move Brackets
// https://codeforces.com/problemset/problem/1374/C





































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
        string s; cin >> s;

        int ans = 0;
        int opening = 0;
        for(int i=0; i<n ; i++){
            if(s[i] == '('){
                opening++;
            }
            else{
                if(opening == 0){ ans++;}
                else{ opening--;}
            }
        }

        cout << ans << endl;
    }
}