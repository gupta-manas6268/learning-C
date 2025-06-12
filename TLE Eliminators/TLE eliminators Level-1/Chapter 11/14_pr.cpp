// Wrong.

// D. Print Digits using Recursion
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int i = 0;
void digit_Recursion(int n){
    if((n > 0) && (i == 0)){
        i++;
        digit_Recursion(n/10);
        cout << (n % 10);
    }
    else if(n > 0){
        digit_Recursion(n/10);
        cout << (n % 10) << " ";
    }
    else{
        cout << "";
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        digit_Recursion(n);
        cout << endl;
    }
}