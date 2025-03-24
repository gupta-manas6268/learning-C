// 

// C. Make It Permutation
// https://codeforces.com/problemset/problem/1810/C



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
        int n, c, d; cin >> n >> c >> d;
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}

        // Solution
        sort(a.begin(), a.end());
        int ans = 0;
        vector<int> New_a;
        for(int i=0; i<n; i++){
            if((i != 0) && (a[i] == a[i-1])){ ans += c;}
            else{ New_a.push_back(a[i]);}
        }

        int Cost[New_a.size()+1] = {0};
        Cost[0] += ((New_a.size())*c) + d;
        for(int i=0; i < New_a.size(); i++){
            Cost[i+1] += (New_a[i] - (i+1))*d;
            Cost[i+1] += (New_a.size()-i-1)*c;
        }

        int Mini = INT_MAX;
        for(int i=0; i <= New_a.size(); i++){
            Mini = min(Mini, Cost[i]);
        }
        ans += Mini;

        // O/P
        cout << ans << endl;
    }
}