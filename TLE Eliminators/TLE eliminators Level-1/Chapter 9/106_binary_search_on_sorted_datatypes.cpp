#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    set<int> st{1, 2, 3, 4, 6, 8, 9};

    auto it_1 = st.lower_bound(5);
    cout << *it_1 << endl;
    ++it_1;
    cout << *it_1 << endl;

    cout << endl;
    
    auto it_2 = st.upper_bound(4);
    cout << *it_2 << endl;
    --it_2;
    cout << *it_2 << endl;

    // st.binary_search();   // This function does not exist in Sets.

    // st.find(val) // This is an iterator which is used where 'binary_search' is used in Vectors.
    // st.end()     // If val is not present.

    st.count(4); // It will count the number of times '4' is present in this Set.
    // As in set, values doesn't repeat. So, this function will give us answer '1' or '0'.


    map<int, int> mp;

}