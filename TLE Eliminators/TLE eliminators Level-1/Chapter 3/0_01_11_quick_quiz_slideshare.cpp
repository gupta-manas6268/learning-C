t
// Problem 1: https://codeforces.com/contest/1647/problem/A

// This code didn't work in Codeforces.
















// Hints from Tutorial.
// Hint 1: The optimal answer has the maximum number of digits, so you only need to use the digits 1,2

// Hint 2: Alternate these numbers so that there are no adjacent identical numbers.
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        int x = n / 3;
        int y = n % 3;

        int a = x, b = x;

        if(y == 1){ a++;}
        else if(y == 2){ b++;}

        int ans = 0;

        if(a > b){
            ans = 1;

            for(int i=0; i<b; i++){
                ans *= 100;
                ans += 21;
            }
        }
        else if(b > a){
            ans = 2;

            for(int i=0; i<a; i++){
                ans *= 100;
                ans += 12;
            }
        }
        else{
            for(int i=0; i<a; i++){
                ans *= 100;
                ans += 21;
            }
        }

        cout << ans << endl;
    }
}