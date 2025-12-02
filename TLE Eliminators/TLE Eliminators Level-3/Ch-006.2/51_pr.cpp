// Correct.

// C. The Fair Nut and String
// https://codeforces.com/problemset/problem/1084/C




































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
    string s; cin >> s;

    // Solution
    int n = s.length();
    vector<int> Length;
    int curr_length = 0;
    for(int i=0; i < n; i++){
        if(s[i] == 'a'){ curr_length += 1;}
        else if((s[i] == 'b') && (curr_length > 0)){
            Length.push_back(curr_length);
            curr_length = 0;
        }
        
        if((curr_length > 0) && (i == n-1)){
            Length.push_back(curr_length);
        }
    }

    int ans = 1;
    for(int i=0; i < Length.size(); i++){
        ans *= (Length[i] + 1);
        ans %= MOD;
    } 
    ans -= 1;

    // O/P
    cout << ans << endl;
}