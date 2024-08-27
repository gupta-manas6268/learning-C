// Correct.

// Q.: Distinct number of elements in all subarrays of size k.



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
    for(auto &i:arr){ cin >> i;}

    map<int,int> mp;
    for(int i=0; i < k; i++){
        mp[arr[i]]++;
    }

    cout << mp.size() << " ";
    // mp.size() => It gives the number of unique elements
    //               in the map.

    for(int i = k; i < n; i++){
        mp[arr[i-k]]--;
        if(mp[arr[i-k]] == 0){
            mp.erase(arr[i-k]);
        }
        mp[arr[i]]++;

        cout << mp.size() << " ";
    }
    cout << endl;

    // TC = O(n * log(k)).
}