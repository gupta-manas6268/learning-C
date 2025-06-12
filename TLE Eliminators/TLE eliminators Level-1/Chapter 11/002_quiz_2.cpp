// Q.2: Write an infinite recursive function that 
//       prints the number of times it has run so far.




















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int infinite_1(int n){
    cout << n << endl;

    return infinite_1(n+1);
}

void infinite_2(int n){
    cout << n << endl;

    infinite_2(n+1);
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    infinite_1(1);
    // infinite_2(1);
}