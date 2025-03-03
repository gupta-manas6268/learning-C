// 

// Room Allocation
// https://cses.fi/problemset/task/1164



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool sortbysec(pair<pair<int,int>, int> &a, pair<pair<int,int>, int> &b){
    return (a.first.second < b.first.second);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end(), sortbysec);

    // O/P
    int total_rooms = 0;
    int current_room = 0;
    vector<int> beginning(n+1);
    for(int i=0; i<n; i++){
        if(i == 0){
            total_rooms = 1;
            current_room = 1;
            beginning[current_room] = vec[i].second;
        }
        else{
            
        }
    }
}