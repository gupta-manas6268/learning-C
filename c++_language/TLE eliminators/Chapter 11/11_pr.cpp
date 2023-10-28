// This problem shows "Time limit exceeded" in Codeforces.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int func(int n){
    if(n == 0){ }

    else{
        cout << "I love Recursion"<< endl;
        return func(n-1);
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    func(n);
}