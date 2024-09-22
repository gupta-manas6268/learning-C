// Correct.

// A. Johnny and Ancient Computer
// https://codeforces.com/problemset/problem/1362/A





































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            result *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int a, b; cin >> a >> b;

        int mul = (b / a);
        int mod_mul = (b % a);

        int div = (a / b);
        int mod_div = (a % b);

        int ans = 0;
        if(div == 0){
            if(mod_mul != 0){
                ans = -1;
            }
            else{
                int exponent = log2(mul);
                if(power(2, exponent) == mul){
                    ans += (exponent / 3);
                    exponent %= 3;
                    ans += (exponent / 2);
                    exponent %= 2;
                    ans += exponent;
                    exponent %= 1;
                }
                else{
                    ans = -1;
                }
            }
        }
        else if(mul == 0){
            if(mod_div != 0){
                ans = -1;
            }
            else{
                int exponent = log2(div);
                if(power(2, exponent) == div){
                    ans += (exponent / 3);
                    exponent %= 3;
                    ans += (exponent / 2);
                    exponent %= 2;
                    ans += exponent;
                    exponent %= 1;
                }
                else{
                    ans = -1;
                }
            }
        }

        cout << ans << endl;
    }
}