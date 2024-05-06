// Correct.

// Q. 3n + 1 sequence
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int sequence(int n){
    if(n != 1){
        if(n%2 != 0){
            return 1 + sequence(3*n + 1);
        }
        else{
            return 1 + sequence(n/2);
        }
    }
    return 1;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    cout << sequence(n) << endl;
}