// Correct.

// Number Spiral
// https://cses.fi/problemset/task/1071/



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int x, int y){
    long long temp = max(x, y);
    long long diagonal = ((temp * temp) - temp + 1);
    
    if(x == y){
        cout << diagonal << endl;
        return ;
    }
    if(x == temp){
        if(x & 1){
            cout << diagonal - (x-y) << endl;
        }
        else{
            cout << diagonal + (x-y) << endl;
        }
    }
    
    else{
        if(y & 1){
            cout << diagonal + (y-x) << endl;
        }
        else{
            cout << diagonal - (y-x) << endl;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long x, y; cin >> x >> y;    // x -> row no. , y -> column no.
        solve(x, y);
    }
}