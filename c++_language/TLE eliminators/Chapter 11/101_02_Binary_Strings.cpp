// *********** This is Part-02 of the Lecture. ***********






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
    string s;

void solve(){ // O(1).
    // In this function, we have a global 'string', but it works well with this also. 
    if(s.size() == n){
        cout << s << endl;

        return;
    }

    s.push_back('0'); // From line 27-33, After the recursive call returns 
    solve();          //    (either after printing the complete string or 
    s.pop_back();     //    reaching the base case), it removes the last 
                      //    character from the string s (using s.pop_back()). 
    s.push_back('1'); //    This backtracking step is essential to explore other
    solve();          //     possibilities.
    s.pop_back();
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    solve();

    // This code is faster than 101_01_Binary_strings.cpp
}