// Correct.
// (This is My Version of Mentor's code.)

// Creating Strings
// https://cses.fi/problemset/task/1622




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<string> ans;
void solve(int n, vector<int>& freq, string current){
    if(current.length() == n){
        ans.push_back(current);
        return;
    }
    for(int i=0; i < 26; i++){
        if(freq[i] > 0){
            freq[i]--;
            solve(n, freq, current + char('a' + i));
            freq[i]++;
        }
    }
}

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
    vector<int> freq(26, 0);
    for(int i=0; i < n; i++){
        int index = (s[i] - 'a');
        freq[index]++;
    }

    solve(n, freq, "");

    // O/P
    cout << ans.size() << endl;
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    cout << endl;
}