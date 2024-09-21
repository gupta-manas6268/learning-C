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
        int n, k;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        map<int,int> mp;
        for(int i=0; i<35; i++){
            mp[i] = 0;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j < 35; j++){
                if((a[i] & (1 << j)) == 1){
                    mp[j] += (1 << j);
                }
            }
        }

        vector<pair<int,int>> vec;
        for(int i=0; i<35; i++){
            vec.push_back({mp[i], i});
        }
        sort(vec.begin(), vec.end(), greater<int>());

        int X = 0;
        for(int i=0; i<k; i++){
            
        }
    }
}