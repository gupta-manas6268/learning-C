// Correct.

// A. Vlad and the Best of Five
// https://codeforces.com/problemset/problem/1926/A


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string str; cin >> str;
        int a = 0, b = 0;
        for(int i=0; i<5; i++){
            if(str[i] == 'A'){ a++;}
            else{ b++;}
        }

        if(a > b){ cout << "A" << endl;}
        else{ cout << "B" << endl;}
    }
}