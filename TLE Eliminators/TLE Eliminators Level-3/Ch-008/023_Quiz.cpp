// Correct.
//  (I don't know anything about this Problem Concept
//    So, write Concept in Note-Book. But, it's my Code.)

// This is My version of Mentor's code.

// E. Arranging The Sheep
// https://codeforces.com/problemset/problem/1520/E
































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
        int n; cin >> n;
        string s; cin >> s;

        // Solution
        vector<int> position;
        for(int i=0; i<n; i++){
            if(s[i] == '*'){
                position.push_back(i+1);
            }
        }

        int ans = 0;
        int k = position.size(); // (k => No. of Sheeps.)
        int Gap = (k-1);
        for(int i=0; i < (k/2); i++){
            ans += ((position[k-i-1] - position[i]) - Gap);
            Gap -= 2;
        }

        // O/P
        cout << ans << endl;
    }
}