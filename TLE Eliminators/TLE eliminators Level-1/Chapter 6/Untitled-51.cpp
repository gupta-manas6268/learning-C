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
        int n, k; cin >> n >> k;
        int s1 = 1, s2 = n;

        for(int i=1; i<=k; i++){
            if(s1 != n){ s1++;}
            else{s1 = 1;}
        }
    }
}