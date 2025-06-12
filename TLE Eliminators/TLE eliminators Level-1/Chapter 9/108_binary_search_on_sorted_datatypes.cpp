#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // set -→ tree data structure in which you will give some value 
    //         it will store every thing in sorted order.

    set<int> st_1{2, 3, 1, 4};

    for(int x : st_1){
        cout << x << " ";
    } cout << '\n';


    set<int, greater<int>> st_2{2, 3, 1, 4};

    for(int x : st_2){
        cout << x << " ";
    } cout << '\n';

    
}