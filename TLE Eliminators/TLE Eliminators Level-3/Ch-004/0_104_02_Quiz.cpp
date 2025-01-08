// Correct.
// This is Mentor's code.

// G. Not Very Rude Substring
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/G



































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
    int n, c; cin >> n >> c;
    string s; cin >> s;

    // O/P
    int a = 0, b = 0;
    int current = 0;
    int ans = 0;
    for(int left = 0, right = 0; right < n; right++){
        a += (s[right] == 'a');
        b += (s[right] == 'b');
        if(s[right] == 'b'){
            current += a;
        }

        while(current > c){
            a -= (s[left] == 'a');
            b -= (s[left] == 'b');
            if(s[left] == 'a'){
                current -= b;
            }
            left++;
        }
        ans = max(ans, right-left+1);
    }

    cout << ans << endl;
    // TC = O(n).
}