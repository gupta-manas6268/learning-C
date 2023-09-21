#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    bool isHard = false;
    for(int i=0; i<n; i++){
        int res; cin>>res;

        if(res == 1)
            isHard = true;
    }
    if(isHard == true)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    
}