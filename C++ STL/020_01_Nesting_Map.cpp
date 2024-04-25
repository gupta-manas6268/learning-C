#include<bits/stdc++.h>
using namespace std;

int main(){
    map <pair<int, int>, int> m;

    pair <int, int> p1, p2;
    // p1 = {1, 2};
    p1 = {2, 2};
    p2 = {2, 3};
    cout << (p1 < p2); // If (p1 < p2) then prints -> 1,
                       //  else prints -> 0.

    return 0;
}