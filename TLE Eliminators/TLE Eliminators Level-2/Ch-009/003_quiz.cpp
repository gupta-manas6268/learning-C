// This is Homework Question.
// 

// Forest Queries
// https://cses.fi/problemset/task/1652



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

    int n, q; cin >> n >> q;
    vector<string> vec;
    for(int i=0; i<n; i++){
        string temp; cin >> temp;
        vec.push_back(temp);
    }
    vector<vector<int>> query;
    for(int i=0; i<q; i++){
        vector<int> Temp;
        for(int i=0; i<4; i++){
            int temp; cin >> temp;
            Temp.push_back(temp);
        }
        query.push_back(Temp);
    }

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){

        }
    }
}