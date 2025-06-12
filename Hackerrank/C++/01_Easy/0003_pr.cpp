// Wrong.

// Handshake.
// https://www.hackerrank.com/challenges/handshake/problem?isFullScreen=true




#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=1; i <= n; i++){ ans *= i;}
    return ans;
}

int nCr(int n, int r){
    int ans = ((fact(n))/ (fact(n-r) * fact(r)));
    return ans;
}

int handshake(int n){
    int ans = nCr(n, 2);
    return ans;
}

int main(){
    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        cout << handshake(n) << endl;
    }

    return 0;
}