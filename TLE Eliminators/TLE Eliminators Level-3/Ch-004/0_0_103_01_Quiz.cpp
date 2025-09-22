// Correct.
// (I write it Myself, So, you can avoid to solve this Question Now.)

// This is Mentor's code.

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

    // In Slide-02, Page-20 & Page-22 => (F => Frequency.)

    // I/P
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    // O/P
    int ans = 0;
    vector<int> freq(26);
    // O(m).
    for(auto &i:t){ freq[i - 'a']++;}

    // O(n)
    for(int left = 0, right = 0; right < n; right++){
        freq[s[right] - 'a']--;

        // O(26).
        while(*min_element(freq.begin(), freq.end()) < 0){
            freq[s[left] - 'a']++;
            left++;
        }

        ans += (right - left + 1);
    }

    cout << ans << endl;
    // TC = O(n + m).
}