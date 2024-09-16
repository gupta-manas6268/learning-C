// Ordered Map(OM).



#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // Ordered map.
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    // m.insert({4, "afg"});
    m.insert({3, "afg"});
    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    for(auto &Pair: m){
        cout << Pair.first << " " << Pair.second << endl;
    }
    cout << m.size();

    return 0;
}