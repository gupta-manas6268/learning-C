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
    int n, k; cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    // O/P
    int x = 0, y = 0;
    int sum = 0;
    int ans = 1000001, length = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        y++;
        if(sum >= k){
            length = (y-x);
            ans = min(ans,length);
            sum -= arr[x];
            x++;
        }
    }

    cout << ans << endl;
    // TC = O(n * log(k)).
}