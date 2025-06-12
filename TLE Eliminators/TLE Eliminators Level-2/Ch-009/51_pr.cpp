// Wrong (Compilation error in Codeforces.)

// B. Karen and Coffee
// https://codeforces.com/contest/816/problem/B



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int Temperature[200001] = {0};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k, q; cin >> n >> k >> q;
    // vector<int> l(n), r(n);
    vector <pair<int, int>> L_R;
    for(int i=0; i<n; i++){
        int x, y; cin >> x >> y;
        // l.push_back(x); 
        // r.push_back(y);
        L_R.push_back(make_pair(x, y));
    }

    vector<int> a, b;
    for(int i=0; i<q; i++){
        int x, y; cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }

    sort(L_R.begin(), L_R.end());
    for(int i=0; i<n; i++){
        int First = L_R[i].first;
        int Second = L_R[i].second;

        for(int j = First; j <= Second; j++){
            Temperature[j]++;
        }
    }

    int ans[q] = {0};
    for(int i=0; i<q; i++){
        for(int j = a[i]; j <= b[i]; j++){
            if(Temperature[j] >= k){ ans[i]++;}
        }
    }

    for(int i=0; i<q; i++){
        cout << ans[i] << endl;
    }
}