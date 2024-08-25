// Wrong.

// C. Intersections
// https://codeforces.com/gym/101853/problem/C



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
        vector<pair<int,int>> a, b;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back({temp, i});
        }
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            b.push_back({temp, i});
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int intersection = 0;
        vector<pair<int,int>> joint_Index;
        for(int i=0; i<n; i++){
            joint_Index.push_back({a[i].second, b[i].second});

            if(a[i].second < b[i].second){
                intersection += (b[i].second - a[i].second);
            }
        }

        cout << intersection << endl;
    }
}