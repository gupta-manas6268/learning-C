// Wrong.

// C - Festival
// https://atcoder.jp/contests/abc322/tasks/abc322_c




































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
    vector<int> a;
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    vector<int> ans;
    for(int i=1; i <= n; i++){
        int Count = count(a.begin(), a.end(), i);

        if(Count > 0){ ans.push_back(0);}
        else{
            vector<int> :: iterator it;
            it = lower_bound(a.begin(), a.end(), i);
            it++;

            int value = (a[it-a.begin()] - i);
            ans.push_back(value-1);
        }
    }

    for(int i=0; i < n; i++){
        cout << ans[i] << endl;
    }
}