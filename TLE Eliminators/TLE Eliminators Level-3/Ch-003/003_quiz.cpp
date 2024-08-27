// Correct.

// Q.: First negative element in all subarrays of
//      length k.
//      (If no negative element in the subarray, then print 0.)




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

    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for(auto &i: arr){ cin >> i;}

    queue<int> q;
    for(int i=0; i < k; i++){
        if(arr[i] < 0){ q.push(arr[i]);}
    }

    if(q.size() != 0){ cout << q.front() << " ";}
    else{ cout << 0 << " ";}

    for(int i = k; i < n; i++){
        if(arr[i-k] < 0){ q.pop();}
        if(arr[i] < 0){ q.push(arr[i]);}

        if(q.size() != 0){ cout << q.front() << " ";}
        else{ cout << 0 << " ";}
    }
    // TC = O(n).
}