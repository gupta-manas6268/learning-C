#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int n){
    int ans = 1;
    while(n--){
        ans *= 2;
    }
    return ans;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    
    while (tc--){
        int n; cin>>n;
        int pow = power(n) - 1;

        cout<< pow<<endl;        
    }
}