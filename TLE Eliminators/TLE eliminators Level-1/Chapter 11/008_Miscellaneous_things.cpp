#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n = 5; // Here, 'n' is a Global Value
void func() {
    if(n == 0)
        return;

    cout << n << endl;  // So, we can use 'return' in 'void'.
    n--;
    func();
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    func();
}