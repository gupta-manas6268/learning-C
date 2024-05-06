// 

// P. Log2
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}

int ans = 0;
int Log(int n){
    if(n == 1){
        return 1;
    }
    else{
        return 1 + Log(n/2);
    }

    if(power(2, ans) == n){
        return ans;
    }
    else{
        return ans-1;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    cout << Log(n) << endl;
}