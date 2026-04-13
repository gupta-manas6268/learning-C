// Path Compression Implementation (From Slide-2, Page-29)

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> parent(1e5+1);
int find_set(int v){
    if(v == parent[v]){
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}