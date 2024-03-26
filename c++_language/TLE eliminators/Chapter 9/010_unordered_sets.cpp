#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    unordered_set<int> s;  // It works because "int" are hashable function.
    s.insert(5);
    s.insert(3);
    s.insert(7);

    set<vector<int>> ut; // "vector" works in "set" but not in "unordered_set".
    // unordered_set<vector<int>> us; // It does not work because "vector" is not a Hashable function.

    unordered_set<string> st;  // It works because "int" are hashable function.
    st.insert("1231");
    st.insert("14");
    st.insert("5243");

    // hashing -→ value is converted to a single integer.
    // EX -→ (a) 1453 -→ 373473834  // here, we convert one integer value to other integer value.
    //       (b) "13214suih" -→ 374974927  // here, we convert string to integer value.
    //       (c)  vector<int> -/→ 879257835 // here, This is not valid in "unordered_set".


    // C++ is bad at Hashing
    // So, unordered_sets are sometimes SLOWER than sets.

    // O(1) is amortized TC.
    // [amortized -→ Sometimes TC = O(1), but sometimes it has a very high TC.]

    // O(N) per Operation. // It is possible in very low Test Cases.

    
    // unordered_set<pair<int, int>> un; // It shows error because "unordered_set" does not store "pairs".
    unordered_set<char> un;
    unordered_set<bool> un;


    unordered_map<int, int> mp;

}