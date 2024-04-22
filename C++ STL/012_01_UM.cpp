// Unordered Map(UM).

#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
    cout << m.size() << endl;
    for(auto &Pair: m){
        cout << Pair.first << " " << Pair.second << endl;
    }
}

int main(){
    // Unordered map.
    unordered_map<int, string> m;
    m[1] = "abc";  // O(1).
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[6];
    m[7] = 4;
    m[5] = "cde";  // See line-16 and O/P of this code.
    
    print(m);
    cout << endl;

    return 0;
}