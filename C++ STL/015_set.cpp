// Set.

#include<bits/stdc++.h>
using namespace std;

void print(set <string> &s){
    for(string value : s){
        cout << value << endl;
    }
    cout << endl;
    for(auto it = s.begin(); it != s.end(); it++){
        cout << (*it) << endl;
    }
}

int main(){
    set <string> s;
    s.insert("abc");  // TC of insertion & access of element of set is = log(n).
    s.insert("zsdf");
    s.insert("bcd");

    auto it = s.find("abc");  // it => iterator.
    print(s);

    return 0;
}