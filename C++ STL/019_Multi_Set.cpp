// Multi-Set(MS).


#include<bits/stdc++.h>
using namespace std;

void print(multiset <string> &s){
    for(string value : s){
        cout << value << endl;
    }
    cout << endl;
    // Below loop gives same O/P as above loop.
    
    // for(auto it = s.begin(); it != s.end(); it++){  
    //     cout << (*it) << endl;
    // }
}

int main(){
    multiset <string> s;
    s.insert("abc");  // O(log(n)) = TC of insertion & access of element of set.
    s.insert("abc");  // It allows duplicate values.
                      // See, O/P carefully.
    s.insert("zsdf");
    s.insert("bcd");

    print(s);
    cout << endl;

    auto it = s.find("abc");  // O(log(n)).
    if(it != s.end()){
        s.erase(it);
    }
    // s.erase("abc");  // Also, see O/P when you uncomment this line & comment
                     //  above three lines.
    print(s);

    return 0;
}