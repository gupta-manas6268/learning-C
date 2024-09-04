// Good Question.
// Wrong.

// B. Square Difference
// https://codeforces.com/problemset/problem/1033/B

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool is_prime(long long n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }

    if(n > 1){
        return true;
    }
    else{
        return false;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long a, b; cin >> a >> b;
        long long  area = ((a*a) - (b*b));

        if(is_prime(area) == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}