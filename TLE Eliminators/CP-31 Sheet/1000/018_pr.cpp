// Correct.

// B. Triangles on a Rectangle
// https://codeforces.com/problemset/problem/1620/B

































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
        int w, h; cin >> w >> h;
        int k1; cin >> k1;
        vector<int> x1;
        for(int i=0; i<k1; i++){
            int temp; cin >> temp;
            x1.push_back(temp);
        }
        int k2; cin >> k2;
        vector<int> x2;
        for(int i=0; i<k2; i++){
            int temp; cin >> temp;
            x2.push_back(temp);
        }

        int k3; cin >> k3;
        vector<int> y1;
        for(int i=0; i<k3; i++){
            int temp; cin >> temp;
            y1.push_back(temp);
        }
        int k4; cin >> k4;
        vector<int> y2;
        for(int i=0; i<k4; i++){
            int temp; cin >> temp;
            y2.push_back(temp);
        }

        sort(x1.begin(), x1.end());
        sort(x2.begin(), x2.end());

        sort(y1.begin(), y1.end());
        sort(y2.begin(), y2.end());

        int del_1 = ((x1[k1-1] - x1[0]) * h);
        int del_2 = ((x2[k2-1] - x2[0]) * h);

        int del_3 = ((y1[k3-1] - y1[0]) * w);
        int del_4 = ((y2[k4-1] - y2[0]) * w);

        int max_1 = max(del_1, del_2);
        int max_2 = max(del_3, del_4);

        int ans = max(max_1, max_2);
        cout << ans << endl;
    }
}