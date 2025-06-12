#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
 
int func(int n){
    if(n == 0)
        return 0;

    int xyz = 0;
    for(int i=0; i<n; i++)
        xyz += i;

    func(n-1);
    return xyz;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int num; cin >> num;
    
    func(num);
}