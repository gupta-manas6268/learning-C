// Correct.

// Longest AND Subarray
// https://www.codechef.com/submit/ANDSUBAR





































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
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
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
        int n; cin >> n;
        int Log = log2(n);

        int a = (n - (power(2, Log) - 1));
        int b;
        if(n > 1){
            if(Log == 1){
                b = 1;
            }
            else{
                b = (power(2, Log) - power(2, Log-1));
            }
        }

        int ans;
        if(n == 1){ ans = 1;}
        else{
            ans = max(a, b);
        }

        cout << ans << endl;
    }
}