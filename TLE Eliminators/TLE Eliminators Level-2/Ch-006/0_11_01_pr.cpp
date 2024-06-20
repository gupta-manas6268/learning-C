// Wrong (TLE => Time Limit Exceeded.)

// M. Minimum LCM
// https://codeforces.com/contest/1765/problem/M



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

long long LCM(long long a, long long b){
    long long ans = (a * b)/ __gcd(a, b);
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n; cin >> n;

        long long a, b;
        if(n%2 == 0){
            a = n/2; 
            b = n/2;
        }
        else{
            int j;
            for(int i = (n/2); i; i++){
                j = (n - i);
                if(LCM(i, j) < n){
                    a = i; b = j;
                    break;
                }
            }
        }

        cout << a << " " << b << endl;
    }
}