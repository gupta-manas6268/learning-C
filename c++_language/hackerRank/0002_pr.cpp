// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=false

// Solved



























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    if(n == 1){ cout << "one" << endl;}
    if(n == 2){ cout << "two" << endl;}
    if(n == 3){ cout << "three" << endl;}
    if(n == 4){ cout << "four" << endl;}
    if(n == 5){ cout << "five" << endl;}
    if(n == 6){ cout << "six" << endl;}
    if(n == 7){ cout << "seven" << endl;}
    if(n == 8){ cout << "eight" << endl;}
    if(n == 9){ cout << "nine" << endl;}
    if(n > 9){ cout << "Greater than 9" << endl;}
}