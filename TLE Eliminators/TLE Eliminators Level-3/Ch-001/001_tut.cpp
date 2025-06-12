#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 17, 19};
    int x = 18;
    
    int n = arr.size();

    int left = 0, right = n-1;
    int ans = 0;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] <= x){
            ans = mid + 1;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    // ans => no. of numbers less than equal to 'x' in the vector.
    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}