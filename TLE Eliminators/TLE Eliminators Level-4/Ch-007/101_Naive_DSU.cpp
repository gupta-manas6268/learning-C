// Naive Implementation of DSU (From Slide-2, Page-9)

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> parent(1e5+1);
void make_set(int v){ // O(n)
    parent[v] = v;
}

int find_set(int v){ // O(n)
    if(v == parent[v]){
        return v;
    }
    return find_set(parent[v]);
}

void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        parent[b] = a;
    }
}
// TLE

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}