#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // This code will work.
    // Because its time complexity = n, 
    //  which is very low compared to previous answer.

    int n; cin>>n;

    vector<int> fibonacci(n+1); // Here, (n+1) because we need to find the fibonacci of nth index.

    fibonacci[1] = 0;
    fibonacci[2] = 1;

    for(int i=3; i<=n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    cout<<fibonacci[n]<<endl;
}