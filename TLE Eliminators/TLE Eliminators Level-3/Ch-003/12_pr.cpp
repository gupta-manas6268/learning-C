// 

// C. Balanced Stone Heaps
// https://codeforces.com/problemset/problem/1623/C



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
        vector<int> heaps;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            heaps.push_back(temp);
        }

        int left = *min_element(heaps.begin(), heaps.end());
        int right = *max_element(heaps.begin(), heaps.end());

        bool BS = false;
        while(left <= right){
            int mid = (left + right)/2;

            for(int i=0; i<n; i++){
                if(heaps[i] < mid){
                    
                }
            }
        }
    }
}