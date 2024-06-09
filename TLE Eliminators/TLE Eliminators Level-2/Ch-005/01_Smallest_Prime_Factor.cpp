#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int n = 1e7;
int SPF[n];     // SPF => Smallest Prime Factor.
// We are declaring this array outside the function, because
//  inside function such large array will give us segmentation
//  fault.

void solve(){

    for(int i=0; i<n; i++){
        SPF[i] = i;
    }
    for(int i=2; i*i <= n; i++){
        if(SPF[i] == i){
            for(int j = i*i; j<n; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                    break;
                }
            }
        }
    }

    // TC = O(n * log(log(n))).
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}