// Correct.
// (This is Mentor's code.)

// D. Divide and Equalize
// https://codeforces.com/contest/1881/problem/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void add_factor(int n, map<int, int> &factors){
    for(int i=2; i*i <= n; i++){
        while(n%i == 0){
            factors[i]++;
            n /= i;
        }
    }
    if(n > 1){
        factors[n]++;
    }
}

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
        vector<int> a(n);
        map<int, int> factor;
        for(int i=0; i<n; i++){
            cin >> a[i];
            add_factor(a[i], factor);
        }

        // Solution
        bool ans = true;
        for(auto it: factor){
            if(it.second%n != 0){
                ans = false;
                break;
            }
        }

        // O/P
        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}