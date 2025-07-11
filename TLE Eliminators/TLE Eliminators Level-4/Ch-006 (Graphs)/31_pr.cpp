// 

// D. Secret Passwords
// https://codeforces.com/problemset/problem/1263/D



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
    int n; cin >> n;
    vector<string> s(n+1);
    for(int i=1; i <= n; i++){
        cin >> s[i];
    }

    // Solution
    vector<set<int>> Letters(n+1);
    for(int i=1; i <= n; i++){
        int Size = s[i].length();
        for(int j=0; j < Size; j++){
            int temp = (s[i][j] - 'a') + 1;
            Letters[i].insert(temp);
        }
    }

    
}