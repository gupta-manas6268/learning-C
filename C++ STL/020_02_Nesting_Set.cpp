#include<bits/stdc++.h>
using namespace std;

int main(){
    map <set<int>, int> m;
    
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {2, 3};
    cout << (s1 < s2);

    return 0;
}