#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int n = 100;
int HPF[n];     // HPF => Highest Prime Factor.
// We are declaring this array outside the function, because
//  inside function such large array will give us segmentation
//  fault.

void solve(){

    for(int i=0; i<n; i++){
        HPF[i] = i;
    }
    for(int i=2; i <= n; i++){      // See this line carefully and
                                    // compare it with previous code. 
        if(HPF[i] == i){
            for(int j = 2*i; j<n; j += i){  // See this line carefully and
                                            // compare it with previous code. 
                HPF[j] = i;
            }
        }
    }

    // TC = O(n * log(n)).

    for(int i=0; i<n; i++){
        cout << i << " = " << HPF[i] << endl;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}