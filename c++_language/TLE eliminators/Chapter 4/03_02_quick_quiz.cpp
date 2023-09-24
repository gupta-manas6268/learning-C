#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s; cin>>s;

    int a[4]{};  // 1 2 3
    // Above ensures that all the array values are empty.

    for(auto i: s)
        if(i != '+')
            a[i - '0']++;

    string res;
    while(a[1]--) res += "1+";
    while(a[2]--) res += "2+";
    while(a[3]--) res += "3+";
    res.pop_back();

    cout<< res <<endl;  
}