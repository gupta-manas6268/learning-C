// Wrong.

// G. Even-Odd XOR
// https://codeforces.com/problemset/problem/1722/G





































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
        int n; cin >> n;
        vector<int> odd, even;
 
        if(n%2 != 0){ // odd
            int maxi = 0;
            int odd_XOR = 0, even_XOR = 0;

            for(int i=0; i < (n+1)/2; i++){
                odd.push_back(2*i + 1);
                odd_XOR = (odd_XOR ^ (2*i + 1));
            }
            for(int i=1; i < (n/2)-1; i++){
                even.push_back(2*i);
                even_XOR = (even_XOR ^ (2*i));
                maxi = (2*i);
            }

            int a, b;
            if(n == 3){
                a = 2;
            }
            else{
                a = (even_XOR ^ odd_XOR);
                if()
            }
        }
    }
}