#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    set<int> st{1, 2, 3, 4, 6, 8, 9};

    auto it = st.upper_bound(4); // O(log(n))

    // never use "lower_bound(st.begin(), st.end(), 5);" // O(n)
    // above line works same as 'upper_bound' function, But it has higher TC than that. So, we use 'upper_bound' instead of this.

    
}