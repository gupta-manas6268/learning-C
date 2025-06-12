// Q.3: Print a number in binary recursively





















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void binary(int n){
    if(n == 0){
        return;
        // return 0; // If we uncomment this line and commment above line, then the code will show error
    }
    
    // if(n == 1){
    //     cout << 1;
    //     return;
    // }

    binary(n / 2);
    cout << n % 2;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    binary(n); // This function will not work if (n == 0), because it will not return anything at that value.
}