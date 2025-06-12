// Ordered-Set.

#include<bits/stdc++.h>
using namespace std;

void print(set <string> &s){
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    set <string> s;
    s.insert("abc");  // TC of insertion & access of element of set is = O(log(n)).
    s.insert("abc");  // See O/P of code carefully. & see that 'set' stores 
                      //  unique values.
    s.insert("zsdf");
    s.insert("bcd");

    auto it = s.find("abc");  // it => iterator.
    // auto it = s.find("abcd");  // TC of 's.find()' is = O(log(n)).
    if(it != s.end()){
        cout << (*it) << endl;
        // s.erase(it);    // Also see O/P when uncommenting this line.
    }
    cout << endl;
    print(s);

    return 0;
}