// Q.: Given 'N' strings, print unique strings in lexicographical
//      order with their frequency
//      N <= 10^5, |S| <= 100.





































#include<bits/stdc++.h>
using namespace std;

int main(){
    map <string, int> m;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        m[s]++;
    }

    for(auto Pair : m){
        cout << Pair.first << " " << Pair.second << endl;
    }

    // Input: 
    // 8
    // abc
    // def
    // abc
    // ghj
    // jkl
    // ghj
    // ghj
    // abc

    return 0;
}