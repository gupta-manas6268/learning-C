// Correct.

// B. Laura and Operations
// https://codeforces.com/problemset/problem/1900/B


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int mod(int a){
    if(a >= 0){ return a;}
    else{ return -a;}
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int a, b, c; cin >> a >> b >> c;

        int ans1, ans2, ans3;
        int dif1 = mod(b-c);
        int dif2 = mod(c-a);
        int dif3 = mod(a-b);

        if((dif1 % 2) == 0){ ans1 = 1;}
        else{ ans1 = 0;}

        if((dif2 % 2) == 0){ ans2 = 1;}
        else{ ans2 = 0;}

        if((dif3 % 2) == 0){ ans3 = 1;}
        else{ ans3 = 0;}

        cout << ans1 << " " << ans2 << " " << ans3 << endl;
    }
}