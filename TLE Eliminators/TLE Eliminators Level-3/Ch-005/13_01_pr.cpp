// Wrong (TLE)

// A. Row GCD
// https://codeforces.com/problemset/problem/1458/A



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

    // I/P
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){ cin >> a[i];}
    for(int i=0; i<m; i++){ cin >> b[i];}

    // O/P
    vector<int> ans(m);
    for(int j=0; j<m; j++){
        int temp_ans = 1;
        bool first = true;
        for(int i=0; i<n; i++){
            int val = (a[i] + b[j]);
            if(first == true){
                first = false;
                temp_ans = val;
            }
            else{
                temp_ans = __gcd(temp_ans, val);
            }
        }
        ans[j] = temp_ans;
    }

    for(int j=0; j<m; j++){
        cout << ans[j] << " ";
    }
    cout << endl;
}