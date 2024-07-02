// 

// B. Blank Space
// https://codeforces.com/problemset/problem/1829/B



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
        int a[n];
        for(int i=0; i<n; i++){ cin >> a[i];}

        vector<int> blank;
        int Blank = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0){
                Blank++;
            }
            else{
                blank.push_back(Blank);
                Blank = 0;
            }
        }

        int ans = *max_element(blank.begin(), blank.end());
        // sort(blank.begin(), blank.end());
        // int ans = blank[blank.size()-1];
        cout << ans << endl;
    }
}