// Correct.
// (This is My code of Mentor's Version.)

// (See Line-70 to 74.)

// C. Good Subarrays
// https://codeforces.com/contest/1398/problem/C

































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
        int n; cin >> n;
        string s; cin >> s;

        // Solution
        vector<int> a(n);
        for(int i=0; i < n; i++){
            a[i] = (s[i] - '0');

            // We want (Sum of Subarray = Length of Sub-array.)
            // But, if we do, 'a[i]--' i.e. decrement each array
            //  element by '1', then we have to do 
            //  (Sum of Subarray = 0), it is easy to Calculate.
            a[i]--;
        }

        // Prefix_Sum + Map
        map<int,int> mp;
        int ans = 0, sum = 0;
        for(int i=0; i < n; i++){
            sum += a[i];
            ans += mp[sum];
            if(sum == 0){ ans++;}
            mp[sum]++;
        }

        // O/P
        cout << ans << endl;
    }
}