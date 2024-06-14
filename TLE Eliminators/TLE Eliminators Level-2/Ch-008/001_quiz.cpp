// Correct.

// Multiple powers of two
// https://www.hackerrank.com/contests/dcc-lab-30-jan/challenges/multiple-powers-of-two/problem



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(auto &it:v){ cin >> it;}

    int maxi = 32;
    while(q--){
        int temp; cin >> temp;

        if(temp >= maxi){
            continue;
        }
        maxi = temp;

        for(int i=0; i<n; i++){
            if((v[i]&((1 << temp) - 1)) == 0){  // Check if 'v[i]' is divisible by 
                                                //  'pow(2, temp)' or not. 
                v[i] += ((1 << temp) - 1);
            }
        }
    }

    // TC = O(q + (31 * n)).  

    // Here, 31 = (32 - 1).  (32 = maxi).

    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}