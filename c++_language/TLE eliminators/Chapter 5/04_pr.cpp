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
        bool ans = false;

        for(int i=2; i<n; i++){
            if(n % 2 == 1){ ans = true; break;}
            
            if((n % i == 0) && (i > 2)){ ans = true; break;}
            else if(n % i == 0){
                n /= i; i--;
            }
        }
        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}