#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int prime(int n){
    bool prime = true;

    for(int i=0; i<n; i++){
        if(n % i == 0){ prime = false;}
    }
    if(prime == true){ return 0;}
    else{ return 1;}
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int d; cin>>d;

        int x, y;

        for(int i=d+1; i; i++){
            int a = prime(i);

            if(a == 0){
                x = i; break;
            }
        }
        for(int j = x + d; j; j++){
            int b = prime(j);

            if(b == 0){
                y = j; break;
            }
        }
        
        int ans = x * y;
        cout<< ans << endl;
    }
}