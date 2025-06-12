#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void permutation(int n){
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            int ct = 0;
            while(n%i == 0){
                ct++;
                n /= i;
            }
            arr.push_back({i, ct}); // i^ct
        }
    }

    if(n != 1) arr.pb({n, 1});

    // 2^5, 3^6, 5^2, 7^2
    // 2*3*5*7 -→ 210-→ 2^4, 3^5, 5^1, 7^1
    // 2*3*5*7 -→ 210-→ 2^4, 3^5, 5^1, 7^1
    // 
    int ans = 0;
    for(int i=0;; i<30; i++){
        int prod = 1;
        for(auto &j : arr){
            if(j.second){
                j.second--;
                prod *= j.first;
            }
        }
        if(prod != 1) ans += prod;
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin>>n;
        int arr[2*n];

        permutation(n);
    }
}