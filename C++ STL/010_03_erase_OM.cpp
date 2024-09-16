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
    m[6];
    m[7] = 4;
    m[5] = "cde";  // See line-24 and O/P of this code.
    
    // m.erase(3);
    auto it_1 = m.find(5);
    m.erase(it_1);

    auto it_2 = m.find(8);  // As, '8' is not in this map
                            //  So, this gives error in O/P.
    m.erase(it_2);

    print(m);

    return 0;
}