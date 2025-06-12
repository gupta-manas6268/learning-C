// Correct.

// B. Multiply by 2, divide by 6
// https://codeforces.com/problemset/problem/1374/B































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
        long long n; cin >> n;

        long long ans = 0;
        bool Ans = true;
        while(n > 1){
            if(n%6 == 0){ n /= 6; ans++;}
            else if(n%3 == 0){
                n *= 2;
                n /= 6;

                ans += 2;
            }
            else{
                Ans = false; break;
            }
        }

        if(Ans == true){ cout << ans << endl;}
        else{ cout << -1 << endl;}
    }
}