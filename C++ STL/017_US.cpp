// Unordered-Set(US).

#include<bits/stdc++.h>
using namespace std;

void print(unordered_set <string> &s){
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
    unordered_set <string> s;
    s.insert("abc");  // O(1) = TC of insertion & access of element of set.
    s.insert("abc");  // Here, Lexiographical order of set doesn't matter.
    
    s.insert("zsdf");
    s.insert("bcd");

    auto it = s.find("abc");  
    // auto it = s.find("abcd");  // O(1) = TC of 's.find()'.
    if(it != s.end()){
        cout << (*it) << endl;
        // s.erase(it);    // Also see O/P when uncommenting this line.
    }
    cout << endl;
    print(s);

    return 0;
}