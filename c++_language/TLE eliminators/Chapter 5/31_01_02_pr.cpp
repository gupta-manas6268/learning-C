#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool prime = true;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;

    SieveOfEratosthenes();
        
    while (t--){
        int d; cin>>d;
        long long p, q;
        for(int i = 1 + d;; i++){
            if(prime[i]){
                p = i;
                
            }
        }

    }
    
}