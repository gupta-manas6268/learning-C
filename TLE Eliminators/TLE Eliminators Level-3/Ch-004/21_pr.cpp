// Correct.

// C. They Are Everywhere
// https://codeforces.com/problemset/problem/701/C




































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
    string s; cin >> s;

    // O/P
    map<char,int> mp_1;
    for(int i=0; i<n; i++){
        mp_1[s[i]]++;
    }
    int k = mp_1.size();

    map<char,int> mp_2;
    int ans = (n+1);
    for(int left = 0, right = 0; right < n; right++){
        mp_2[s[right]]++;
        while(mp_2.size() == k){
            int length = (right - left + 1);
            ans = min(ans, right-left+1);

            mp_2[s[left]]--;
            if(mp_2[s[left]] == 0){
                mp_2.erase(s[left]);
            }
            left++;
        }
    }

    cout << ans << endl;
}