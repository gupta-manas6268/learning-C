// This is Mentor's code.
// Correct.

// Creating Strings
// https://cses.fi/problemset/task/1622



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<string> allStrings;
void backtrack(int index, int size, vector<int> &freq, string curr){
    if(index == size){
        allStrings.push_back(curr);
        return;
    }
    for(int i=0; i < 26; i++){
        if(freq[i] > 0){
            freq[i]--;
            backtrack(index + 1, size, freq, curr + char('a' + i));
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

    string s; cin >> s;
    
    vector<int> f(26);
    for(auto &i:s){
        f[i - 'a']++;
    }

    backtrack(0, s.size(), f, "");
    
    cout << allStrings.size() << endl;
    for(auto &i : allStrings){
        cout << i << endl;
    }
}