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
    int n, t; cin >> n >> t;
    vector<int> k(n);
    for(int i=0; i < n; i++){ cin >> k[i];}

    // Solution
    int left = 1, right = 1e18;
    int ans;
    while(left <= right){
        int mid = (left + right) / 2;

        int temp = 0;
        for(int i=0; i < n; i++){
            temp += (mid / k[i]);

            if(temp >= t){ break;}
        }

        if(temp >= t){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    // O/P
    cout << ans << endl;
}