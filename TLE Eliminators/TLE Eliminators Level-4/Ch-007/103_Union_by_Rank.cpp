// Union by Rank Implementation (From Slide-2, Page-22)

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> parent(1e5+1), Rank(1e5+1);
void make_set(int v){
    parent[v] = v;
    Rank[v] = 0;
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
        if(Rank[a] < Rank[b]){
            swap(a, b);
        }
        parent[b] = a;
        if(Rank[a] == Rank[b]){
            Rank[a]++;
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}