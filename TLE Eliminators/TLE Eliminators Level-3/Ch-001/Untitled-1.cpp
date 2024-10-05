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
        int n, k; cin >> n >> k;
        vector<int> v;
        int sum = 0;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            sum += temp;
            v.push_back(temp);
        }

        int left = 0, right = sum;
        while(left <= right){
            int mid = (left + right)/ 2;

            vector<int> work;
            int people = 1;
            int temp = 0;
            
            for(int i=0; i<n; i++){

            }
        }
    }
}