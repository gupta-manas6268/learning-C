// Unordered Map(UM).

#include<bits/stdc++.h>
using namespace std;

int main(){
    // map <pair<int,int>, string> m; // No error.

    unordered_map <pair<int,int>, string> m; // error.
    // 'unordered_map'  doesn't work with 'pair & sets'.

    return 0;
}