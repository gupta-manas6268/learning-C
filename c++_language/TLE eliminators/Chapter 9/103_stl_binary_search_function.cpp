#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};

    // function(begin_it, end_it, target, cmp);   // cmp -→ Comparator.
    // 
    // cmp -→ pretty similar but a little different from usual.



    // You want to find whether '5' is present in the array or not.
    // the 'binary_search' function will return you a bool -→ true/false

    cout << binary_search(a.begin(), a.end(), 5) << endl;

    // What if you wanted to find the smallest element >= 5
    // 'lower_bound' function will return you an iterator if the array is sorted.
    // TC = O(N * log(N))

    // *lower_bound(a.begin(), a.end(), 5);
    auto it_1 = lower_bound(a.begin(), a.end(), 5);
    int idx_1 = it_1 - a.begin(); // idx =→ index.
    cout << idx_1 << endl;
    cout << idx_1 << endl;

    // What if you wanted to find the greatest element <= 5
    // 'upper_bound' function will return you an iterator if the array is sorted.
    // TC = O(N * log(N))

    // *upper_bound(a.begin(), a.end(), 5);
    auto it_2 = upper_bound(a.begin(), a.end(), 5);
    int idx_2 = it_2 - a.begin(); // idx =→ index.
    cout << idx_2 << endl;

    cout << endl;
    cout << endl;


    vector<int> b = {1, 2, 3, 4, 6, 7, 8};

    auto it_3 = lower_bound(a.begin(), a.end(), 5);
    int idx_3 = it_3 - a.begin(); 
    cout << idx_3 << endl;

    auto it_4 = lower_bound(a.begin(), a.end(), 5);
    int idx_4 = it_4 - a.begin(); 
    cout << idx_4 << endl;

    // So, the upper bound & lower_bound of '5' is same, because '5' is not present in vector-b.
}