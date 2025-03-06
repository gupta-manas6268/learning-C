// 

// Common Divisors
// https://cses.fi/problemset/task/1081



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int val = 1e6;
int SPF[val+1];
void spf(){
    for(int i=0; i <= val; i++){
        SPF[i] = i;
    }
    for(int i=2; i <= val; i++){
        if(SPF[i] == i){
            for(int j = i*i; j <= val; j += i){
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
    vector<int> x(n);
    for(int i=0; i<n; i++){ cin >> x[i];}

    // O/P
    spf();
    vector<vector<pair<int,int>>> prime_factors;
    for(int i=0; i<n; i++){
        int num = x[i];
        vector<pair<int,int>> temp;
        int power = 0;
        while(num > 1){
            prime_factors.push_back(SPF[num]);
            num /= SPF[num];
        }
    }
}