#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    map <set<int>, int> m;
    
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {2, 3};
    cout << (s1 < s2);

    return 0;
}