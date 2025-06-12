#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}

long long recursion(int n){
    int ans = 0;
    long long i = 0;
    while(n > 0){
        int a = (n % 2);
        ans += a * power(10, i);
        i++;
        n /= 2;
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        cout << recursion(n) << endl;
    }
}