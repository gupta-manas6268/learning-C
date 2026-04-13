// Correct.

// Multiple powers of two
// https://www.hackerrank.com/contests/dcc-lab-30-jan/challenges/multiple-powers-of-two/problem






















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

    // I/P
    int n, q; cin >> n >> q;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}
    int query[q];
    for(int i=0; i<q; i++){ cin >> query[i];}

    // Solution
    int maxi = 32;
    for(int i=0; i<q; i++){
        if(query[i] < maxi){
            maxi = query[i];

            for(int j=0; j<n; j++){
                if((a[j] & ((1 << query[i])-1)) == 0){   // Check if 'v[i]' is divisible by 
                                                         //  'pow(2, temp)' or not. 
                    a[j] += ((1 << query[i])-1);
                }
            }
        }
    }

    // TC = O(q + (31 * n)).

    // Here, 31 = (32 - 1).   (32 = maxi)

    // O/P
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}