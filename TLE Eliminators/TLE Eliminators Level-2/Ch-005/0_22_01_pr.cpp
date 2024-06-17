// Wrong.

// B. Prime Matrix
// https://codeforces.com/contest/271/problem/B





















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
    if(n > 1){
        return true;
    }
    else{
        return false;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int prime_difference[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // Filling 'Prime_Difference' array.
            for(int a = arr[i][j]; a; a++){
                if(is_prime(a) == true){
                    prime_difference[i][j] = (a - arr[i][j]);
                    break;
                }
            }
        }
    }

    int row_Matrix[n] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            row_Matrix[i] += prime_difference[i][j];
        }
    }

    int column_Matrix[m] = {0};
}