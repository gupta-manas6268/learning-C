#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Prime Factors Sieve
const int num = 2e5+5;  // You put 'num' according to Problem.
int SPF[num];
void Prime_Factors_Sieve(){ // O(n * log(log(n)))
    for(int i=0; i < num; i++){
        SPF[i] = i;
    }
    for(int i=2; i < num; i++){
        if(SPF[i] == i){
            for(int j = i*i; j < num; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    
    // Solution
    Prime_Factors_Sieve();
    vector<int> Factor_freq(n+5, 0);
    for(int i=0; i < n; i++){
        int num = a[i];
        while(num > 1){
            Factor_freq;
            num /= SPF[num];
        }
    }
}