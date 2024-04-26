// Don't know, because Codeforces just crashed.

// A. Second Order Statistics
// https://codeforces.com/problemset/problem/22/A?mobile=falsehttps://codeforces.com/problemset/problem/22/A?mobile=false


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){ cin >> arr[i];}
    sort(arr.begin(), arr.end());

    bool ans = false;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]){
            ans = true;
            cout << arr[i] << endl;
            break;
        }
    }
    if(ans == false){
        cout << "NO" << endl;
    }
}