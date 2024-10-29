// 

// Room Allocation
// https://cses.fi/problemset/task/1164



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
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        vec.push_back({a, b});
    }

    int k = 0;
    vector<int> ans;
    vector<pair<int,int>> room;
    for(int i=0; i<n; i++){
        if(i == 0){
            
        }
    }
}