// 

// B. Array merging
// https://codeforces.com/problemset/problem/1831/B



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
        vector<int> c;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            c.push_back(temp);
        }
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            c.push_back(temp);
        }

        sort(c.begin(), c.end());

        vector<int> freq;
        int i=0;
        while(i < n){
            int Freq = count(c.begin(), c.end(), c[i]);
            freq.push_back(Freq);
            i += Freq;
        }

        int ans = *max_element(freq.begin(), freq.end());
        cout << ans << endl;
    }
}