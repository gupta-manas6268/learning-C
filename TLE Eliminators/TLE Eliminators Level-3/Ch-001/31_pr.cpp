// Correct.

// B. Worms
// https://codeforces.com/contest/474/problem/B





































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

    int n; cin >> n;
    vector<int> a;
    int num = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        num += temp;
        a.push_back(num);
    }

    int m; cin >> m;
    vector<int> q;
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        q.push_back(temp);
    }

    for(int i=0; i<m; i++){
        int left = 0, right = n-1;
        int ans = n;
        while(left <= right){
            int mid = (left + right)/2;

            if(q[i] <= a[mid]){
                ans = min(ans, mid+1);
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        cout << ans << endl;
    }
}