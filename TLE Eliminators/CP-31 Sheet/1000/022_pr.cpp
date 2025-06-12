// (It is Not giving any OUTPUT.)

// A. Add and Divide
// https://codeforces.com/problemset/problem/1485/A



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
        int a, b; cin >> a >> b;

        int ans = 0;
        int temp = 0;

        int i = 0;
        while(temp <= ans){
            ans = temp;
            temp = 0;
            
            if(i > 0){ b++; temp++;}
            while(a > 0){
                if(b == 1){
                    b++; temp++;
                }
                a = (a / b);
                temp++;
            }
            if(i == 0){
                ans = temp;
            }
            i++;
        }

        cout << ans << endl;
    }
}