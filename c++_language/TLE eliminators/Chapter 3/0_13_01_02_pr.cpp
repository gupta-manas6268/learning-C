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
    for(int i=0; i<n; i++) // O(n). -→{O(n) is 'Time Complexity'.}
        cin>>arr[i];
    
    sort(arr.begin(), arr.end()); // O(n*log(n))
    // By 'sort' we sort numbers in ascending order (then, arr[n-1] is the biggest among all numbers.)

    int ans = 0;
    for(int i=0; i<n; i++)  // O(n)
        ans += (arr[n-1] - arr[i]);

    cout<<ans<<endl;
    
    // So, TC = O(n + n*log(n) + n) = O(n*log(n)).
}