// Unordered Map(UM).

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // map <pair<int,int>, string> m; // No error.

    unordered_map <pair<int,int>, string> m; // error.
    // 'unordered_map'  doesn't work with 'pair & sets'.

    return 0;
}