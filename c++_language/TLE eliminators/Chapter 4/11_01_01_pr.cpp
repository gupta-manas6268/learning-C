#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    int arr[n-1];

    long long a = (n*(n+1))/2;
    long long b = 0;

    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        b += arr[i];
    }
    long long c = a - b;
    cout<< c <<endl;
}