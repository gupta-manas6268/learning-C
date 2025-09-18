// See Code '0_42_pr.cpp', in which I used 
//  Difference-Array properly instead of this code.


// (This code isn't good, don't See this code, 
//   instead, see '0_42_pr.cpp' code.)













#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> v(n);
    for(auto &it:v){ cin >> it;}

    // Solution
    int query; cin >> query;
    vector<int> difference_array(n, 0);
    while(query--){
        int x, left, right; cin >> x >> left >> right;
        difference_array[left] += x;
        if(right != n){
            difference_array[right+1] -= x;
        }
    }

    for(int i=1; i<n; i++){
        difference_array[i] += difference_array[i-1];
    }
    for(int i=0; i<n; i++){
        v[i] += difference_array[i];  // now this 'v' contains new values.
    }

    // O/P
    for(int i=0; i<n; i++){
        cout << difference_array[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}