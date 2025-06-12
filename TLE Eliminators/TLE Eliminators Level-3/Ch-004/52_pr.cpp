// 

// F. Ira and Flamenco
// https://codeforces.com/problemset/problem/1833/F



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
        // I/P
        int n, m; cin >> n >> m;
        set<int> s;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            s.insert(temp);
            mp[temp]++;
        }

        // O/P
        for(int left = 0, right = 0; right < s.size(); right++){
            
        }
    }
}