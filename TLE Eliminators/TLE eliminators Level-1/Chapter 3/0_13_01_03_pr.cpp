#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)  // O(n)
        cin>>arr[i];

    int max_element = arr[0];  
    for(int i=1; i<n; i++)  // O(n)
        max_element = max(max_element, arr[i]);

    // max_element = max(arr.begin(), arr.end()); // O(n)
    // The code shows error when I uncomment above line.(But it is correct in the DR class. So, answer it from the Chatgpt.)
    int ans = 0;
    for(int i=0; i<n; i++)  // O(n)
        ans += (max_element - arr[i]);

    cout<<ans<<endl;

    // O(n + n + n) = O(n).
    // So, this approach has better TC then '13_01_03_pr.cpp' which has TC = n*log(n).
}