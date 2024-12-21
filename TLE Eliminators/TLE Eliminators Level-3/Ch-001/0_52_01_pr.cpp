// Wrong.
// TLE(Time Limit Exceeded.)

// C. Cellular Network
// https://codeforces.com/problemset/problem/702/C




































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

    int n, m; cin >> n >> m;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int left_r = 0, right_r = abs(max(b[m-1]-a[0], a[n-1]-b[0]));
    int ans;
    while(left_r <= right_r){
        int mid = (left_r + right_r)/2;
        bool is_a[n] = {false};

        for(int i=0; i<m; i++){
            int range_start = lower_bound(a.begin(), a.end(), b[i]-mid)-a.begin();
            int range_end = upper_bound(a.begin(), a.end(), b[i]+mid)-a.begin();

            for(int j=range_start; j<range_end; j++){
                is_a[j] = true;
            }
        }

        int num = 0;
        for(int i=0; i<n; i++){
            if(is_a[i] == true){ num++;}
        }

        if(num == n){
            ans = mid;
            right_r = mid-1;
        }
        else{
            left_r = mid+1;
        }
    }

    cout << ans << endl;
}