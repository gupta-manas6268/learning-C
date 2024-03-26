#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    long long n; cin>>n;
    long long a=1, b=n;
    for(long long i=1; i*i<=n; i++){
        if(n%i)continue;
        if(__gcd(i,n/i)==i){
            if(max(i,n/i)<max(a,b)){
                a=i; b=n/i;
            }
        }
    }
    if(a>b)swap(a,b);
    cout<<a<<" "<<b<<endl;
}