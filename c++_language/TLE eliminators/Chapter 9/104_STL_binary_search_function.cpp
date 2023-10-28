#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {1, 2, 3, 4, 6, 7, 8};

    cout << binary_search (a.begin(), a.end(), 5) << endl;

    auto it_1 = lower_bound (a.begin(), a.end(), 5);
    int idx_1 = it_1 - a.begin();

    auto prev = it_1 - 1; // prev -→ previous
    // Above line, find the index of '5 - 1 = 4' in the Vector.
    cout << *prev << endl;

    cout << endl << endl;

    auto it_2 = lower_bound (a.rbegin(), a.rend(), 5);
    int idx_2 = it_2 - a.rbegin();

    // auto prev = it_2 - 1; // prev -→ previous
    // If we uncomment above line, the code will show Error.
    // cout << *prev << endl;

}