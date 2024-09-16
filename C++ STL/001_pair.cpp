#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    pair<int, string> p;
    // p = make_pair(2, "abc");  // Putting values in pair.
    p = {2, "abcd"};  // Putting values in pair.

    cout << p.first << " " << p.second << endl;

    pair<int, string> p1 = p;  // Copying of pair.
    p1.first = 3;
    cout << p1.first << " " << p1.second << endl;

    pair<int, string> &p2 = p;  // Copying of pair.
    p2.first = 3;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}