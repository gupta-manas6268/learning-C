// Correct.

// A. Unit Array
// https://codeforces.com/problemset/problem/1834/A





























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
        int n; cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        // sort(a.begin(), a.end());
        int freq_1 = count(a.begin(), a.end(), -1);
        int freq_2 = count(a.begin(), a.end(), 1);

        int ans = 0;
        if(freq_1 > freq_2){
            int diff = (freq_1 - freq_2);
            ans += (diff/2) + (diff%2);

            freq_1 -= ans;
            freq_2 += ans;
        }
        if((freq_1 % 2) != 0){
            ans += 1;
        }

        cout << ans << endl;
    }
}