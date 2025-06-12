// Correct.

// A. Desorting
// https://codeforces.com/problemset/problem/1853/A
































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

        vector<int> difference;
        for(int i=1; i<n; i++){
            int temp = (a[i] - a[i-1]);
            difference.push_back(temp);
        }

        int mini = *min_element(difference.begin(), difference.end());
        int ans;
        if(mini < 0){
            ans = 0;
        }
        else{
            ans = (mini/2) + 1;
        }

        cout << ans << endl;

        // vector<int> b;
        // sort(a.begin(), a.end());
        // bool sort = true;
        // for(int i=0; i<n; i++){
        //     if()
        // }
    }
}