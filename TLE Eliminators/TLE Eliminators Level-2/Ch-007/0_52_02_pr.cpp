// This is Mentor's code.
// Correct.

// A. Valeriy and Deque
// https://codeforces.com/problemset/problem/1179/A



















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

    // a = [10, 24, 50, 16, 34]  -> Deque.
    //  -> [24, 50, 16, 34, 10]
    //  -> [50, 16, 34, 10, 24]
    //  -> [50, 34, 10, 24, 16]
    //  -> [50, 10, 24, 16, 34]
    //  -> [50, 24, 16, 34, 10]
    //  -> [50, 16, 34, 10, 24]  // This is same as third Deque. 

    // So, deque will repeat in 'n-1' operation 
    // (where, n = size of deque.)


    int n, q; cin >> n >> q;
    deque<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<pair<int, int>> ans(n-1);
    for(int i=0; i < n-1; i++){
        int first = a[0];
        a.pop_front();
        int second = a[0];
        a.pop_front();
        ans[i] = make_pair(first, second);
        a.push_front(max(first, second));
        a.push_back(min(first, second));
    }

    while(q--){
        int m; cin >> m;
        m--;

        if(m >= n-1){
            int position = (m - n + 1) % (n - 1);
            cout << a[0] << " " <<  a[position + 1] << endl;
        }
        else{
            cout << ans[m].first << " " << ans[m].second << endl;
        }
    }
}