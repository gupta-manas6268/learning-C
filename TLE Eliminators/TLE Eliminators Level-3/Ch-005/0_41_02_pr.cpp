// Correct.
// This is Mentor's code.

// E - Double Factorial 
// https://atcoder.jp/contests/abc148/tasks/abc148_e



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int number_Of_Fives(int n){
    int count = 0;
    for(int i=5; i <= n; i *= 5){
        count += n/i;
    }
    return count;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // O/P
    if(n%2 == 1){ // odd
        cout << 0 << endl;
    }
    else{ // even
        cout << number_Of_Fives(n/2) << endl;
    }
}