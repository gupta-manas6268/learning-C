// Correct.
// (I write it Myself, So, you can avoid to solve this Question Now.)

// (This is My code in 2nd time.)

// F. Card Substrings
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/F



































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
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    // Solution
    map<int,int> mp;
    for(int i=0; i < m; i++){
        mp[t[i]-'a']++;
    }

    int ans = 0;
    int i=0, j=0;
    while((i <= j) && (j < n)){
        mp[s[j]-'a']--;
        while(mp[s[j]-'a'] < 0){
            mp[s[i]-'a']++;
            i++;
        }
        if(mp[s[j]-'a'] >= 0){
            ans += (j-i+1);
        }
        j++;
    }

    // O/P
    cout << ans << endl;
    // TC = O(m + (n * log(26))).
}