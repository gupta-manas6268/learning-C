#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int k; cin>>k;

    int hours = 21; int minutes = 0;

    hours += (k/60); minutes += (k%60);

    cout<<hours<<":";
    if(minutes<10)  cout<<0;
    cout<<minutes<<endl;
    
}