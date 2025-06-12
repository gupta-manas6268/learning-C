// Ordered Map(OM).



#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
    cout << m.size() << endl;
    for(auto &Pair: m){
        cout << Pair.first << " " << Pair.second << endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // Ordered map.
    // TC of traversal of loop is = O(n * log(n)).
    map<int, string> m;
    m[1] = "abc";  // O(log(n)).
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m.insert({3, "afg"});
    m[6];
    m[7] = 4;
    m[5] = "cde";  // See line-24 and O/P of this code.
    
    print(m);
    cout << endl;

    // auto it = m.find(3); // Gives string value at '3'.
    auto it = m.find(6);   // and TC = O(1).
    if(it == m.end()){
        cout << "No value" << endl;
    }
    else{
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}