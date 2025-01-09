// Correct.

// B2. TV Subscriptions (Hard Version)
// https://codeforces.com/problemset/problem/1225/B2




































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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, k, d; cin >> n >> k >> d;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            arr.push_back(temp);
        }

        // O/P
        map<int,int> mp;
        int ans = (d + 1);
        for(int i=0; i<d; i++){
            mp[arr[i]]++;
        }
        int Size = mp.size();
        ans = min(ans, Size);

        for(int i=d; i<n; i++){
            mp[arr[i-d]]--;
            if(mp[arr[i-d]] == 0){
                mp.erase(arr[i-d]);
            }
            mp[arr[i]]++;

            int Size_2 = mp.size();
            ans = min(ans, Size_2);
        }

        cout << ans << endl;
    }
}