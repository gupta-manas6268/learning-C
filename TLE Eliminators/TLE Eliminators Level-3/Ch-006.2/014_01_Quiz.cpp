// Wrong.

// E. Monotonic Renumeration
// https://codeforces.com/problemset/problem/1102/E




































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
    int n; cin >> n;
    vector<int> a;
    vector<pair<int,int>> a_Index;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
        a_Index.push_back({temp, i});
    }

    // Solution
    int same_Index = -1;
    sort(a_Index.begin(), a_Index.end());

    int ans = 1;
    for(int i=0; i<n; i++){
        int index = upper_bound(a_Index.begin(), a_Index.end(), make_pair(a[i], INT_MIN)) - a_Index.begin();
        if((a_Index[index-1].first == a[i]) && (a_Index[index-1].second != i)){
            same_Index = a_Index[index-1].second;
        }

        if(same_Index < i){ ans *= 2;}
    }

    // O/P
    cout << ans << endl;
}