// Correct.

// B. Sherlock and his girlfriend
// https://codeforces.com/contest/776/problem/B



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool is_prime(int n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return n>1;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    if(n <= 2){
        cout << "1" << endl;

        for(int i=2; i <= n+1; i++){
            cout << "1" << " ";
        }
    }
    else{
        cout << "2" << endl;

        for(int i=2; i <= n+1; i++){
            if(is_prime(i) == true){ cout << "1" << " ";}
            else{ cout << "2" << " ";}
        }
    }
}