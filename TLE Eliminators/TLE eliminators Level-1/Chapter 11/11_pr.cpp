// Correct.

// A. Print Recursion
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A




















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string print(int n){
    if(n != 0){
        // print(n-1);
        return "I love Recursion\n" + print(n-1);
    }
    else{
        return "";
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    cout << print(n) << endl;
}