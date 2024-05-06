// Wrong. (From this Question.)




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int print(int n){
    if(n != 0){ 
        print(n-1);
        return n;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    print(n);
}