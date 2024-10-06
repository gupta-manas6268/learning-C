// Activity Selection Problem



// Correct.

// Movie Festival
// https://cses.fi/problemset/task/1629

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool sortbysec(pair<int,int> &a, pair<int,int> &b){
    return (a.second < b.second);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        vec.push_back({a, b});
    }

    sort(vec.begin(), vec.end(), sortbysec);

    int ans = 0;
    int end;
    for(int i=0; i<n; i++){
        if(i == 0){
            end = vec[i].second; ans++;
        }
        else{
            if(end <= vec[i].first){
                ans++;
                end = vec[i].second;
            }
        }
    }

    cout << ans << endl;
}