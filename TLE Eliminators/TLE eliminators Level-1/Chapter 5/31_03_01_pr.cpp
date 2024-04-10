#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    int k; cin>>k;

    for(int i=2; i<=n; i++){
        int ans = 0;
        int arr[i];

        for(int j=1; j<=i; j++){
            if(i%j == 0){
                arr[ans-1] == j;
                ans++;
            }
        }
        if(ans>=k){
            
        }
            
        }
}