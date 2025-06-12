#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    unordered_set<int> u = {1, 2, 3, 4, 5, 6, 7, 8};  // It sort numbers in any random Order.

    cout << "Numbers of Set 'u':" << endl;
    for(auto i: u)
        cout << i << endl;

    cout << endl << endl;
    unordered_set<int> t = {1, 2, 6, 4, 8, 123, 24, 65928, 24, 141, 13, 771};  // It sort numbers in any random Order.
    
    cout << "Numbers of Set 't':" << endl;
    for(auto i: t)
        cout << i << endl;

}