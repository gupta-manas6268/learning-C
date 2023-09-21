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
        string S, T; cin>>S>>T;
        string M;

        for(int i=0; i<4; i++){
            if(S[i] == T[i]){
                M[i] == 'G';
            }
            else{
                M[i] == 'B';
            }
        }
    }
}