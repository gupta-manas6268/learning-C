#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int divisors(int n){
    int count=0;
    for(int i=1; i*i<=n; i++){
        if(n%i)continue;
        if(i%2)continue;

        if(i%2==0)count++;
        int seconddivisor=n/i;
        if(seconddivisor==1)continue;
        if(seconddivisor%2==0)count++;
    }
    if(n%2==0)count++;
    return count;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    divisors(n);
}