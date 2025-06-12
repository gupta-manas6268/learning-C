// Correct.

// A. k-Factorization
// https://codeforces.com/problemset/problem/797/A



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    int SPF[n+1];

    for(int i=0; i<=n; i++){
        SPF[i] = i;
    }

    for(int i=2; i*i <= n; i++){
        if(SPF[i] == i){
            for(int j = i*i; j <= n; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }

    int num = n;

    vector<int> prime_factors;
    while(num > 1){
        prime_factors.push_back(SPF[num]);
        num /= SPF[num];
    }

    int Size = prime_factors.size();

    if(k > prime_factors.size()){
        cout << "-1" << endl;
    }
    else if(k == prime_factors.size()){
        for(int i=0; i<Size; i++){
            cout << prime_factors[i] << " ";
        }
    }
    else{
        for(int i = (k); i<Size; i++){
            prime_factors[k-1] *= prime_factors[i];
        }
        for(int i=0; i<k; i++){
            cout << prime_factors[i] << " ";
        }
    }
}   