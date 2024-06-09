// 

// HS08PAUL - A conjecture of Paul Erdős
// https://www.spoj.com/problems/HS08PAUL/



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int res = 1;

    while(exp > 0){
        if(exp % 2 == 1){
            res *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return res;
}

bool is_prime(int n){
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
        int n; cin >> n;

        int ans = 0;
        for(int i=1; power(i, 2) <= n; i++){
            for(int j=1; power(j, 4) <= (n - power(i, 2)); j++){
                int a = power(i,2) + power(j,4);
                if((a <= n) && (is_prime(a) == true)){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}