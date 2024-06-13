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

    int num = n;  // Example number whose prime factors we want to find.

    // Prime factors of 'n'.
    vector<int> prime_factors;
    while(n > 1){
        prime_factors.push_back(SPF[n]);
        num /= SPF[n];
    }

    // TC = O(log2(n)).

    cout << "Prime factors of " << n << ": ";
    for(const int& factor : prime_factors){
        cout << factor << " ";
    }
    cout << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}