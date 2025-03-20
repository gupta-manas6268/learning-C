// Wrong (TLE)
//  (See line-84 to 86.)
// This is Mentor's code.

// A. Duff and Weight Lifting
// https://codeforces.com/problemset/problem/587/A



































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
    multiset<int> w;
    for(int i=0; i<n; i++){ 
        int x; cin >> x;
        w.insert(x);
    }

    // Solution
    int Final_Elements = 0;

    while(!w.empty()){
        int x = *w.begin();
        w.erase(w.begin());
        
        if((w.empty()) || (*w.begin() != x)){
            Final_Elements++;
        }
        else{
            w.erase(w.begin());
            w.insert(x + 1);
        }
    }

    cout << Final_Elements << endl;
    // TC = O(n*log(n)).
    //  As, (n <= 1e6), So, it can give TLE 
    //      for TC = O(n*log(n)).
}