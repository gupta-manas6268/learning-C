// Q.4: https://codeforces.com/problemset/problem/61/A

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a, b; cin>>a>>b;
    int digit = 0;

    vector<int> ans;
    int element;

    while(a>0){
        if((a % 10) == (b % 10)){
            element = 0;

            ans.push_back(element);
        }
        else{
            element = 1;

            ans.push_back(element);
        }
        digit++;
        a /= 10;
    }
    for(int i = digit - 1; i >= 0; i--){
        cout<<ans[i];
    }
    cout<<endl;t
}