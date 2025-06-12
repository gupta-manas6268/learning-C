// 

// C. Vasilije in Cacak
// https://codeforces.com/problemset/problem/1878/C



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n, k, x; cin >> n >> k >> x;

        int sum = 0;
        bool ans;
        for(int i=1; i <= k; i++){
            sum += i;
        }

        if(sum > x){ ans = false;}
        else if(sum == x){ ans = true;}
        else{
            
        }
    }
}