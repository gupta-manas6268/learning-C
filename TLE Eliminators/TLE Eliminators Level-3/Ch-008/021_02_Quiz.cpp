// This is Part-02 of Lecture.

// Correct.
//  (I know the basic Concept of How to Solve this
//    Problem, but my code is giving Wrong OUTPUT.
//    So, write this Code in Note-book.)

// This is Mentor's code.

// C. K-Complete Word
// https://codeforces.com/problemset/problem/1332/C

































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
        int n, k; cin >> n >> k;
        string s; cin >> s;

        // Solution
        int ans = 0;

        for(int i=0; i < (k+1)/2; i++){
            vector<int> freq(26);

            for(int j=0; j<n; j += k){
                freq[s[j + i] - 'a']++;
                if((j + i) != (j + k - 1 - i)){
                    freq[s[j + k - 1 - i] - 'a']++;
                }
            }
            
            // accumulate => Gives Summation of vector.
            ans += (accumulate(freq.begin(), freq.end(), 0) - *max_element(freq.begin(), freq.end()));
        }

        // O/P
        cout << ans << endl;
    }
}