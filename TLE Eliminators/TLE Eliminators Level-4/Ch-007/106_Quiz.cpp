// Correct.
// (This is Mentor's code.)

// D. Quantity of Strings
// https://codeforces.com/problemset/problem/151/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}

class UnionFind{
    private: vector<int> parent, rank;
    public:
        UnionFind(int n){
            rank.assign(n+1, 0); parent.assign(n+1, 0);
            iota(parent.begin(), parent.end(), 0);
        }

        int findSet(int i){ return (parent[i] == i) ? i : parent[i] = findSet(parent[i]);}
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);}

        void unionSet(int i, int j){
            if(!isSameSet(i, j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]){ parent[y] = x;}
                else{
                    parent[x] = y;
                    if(rank[x] == rank[y]){ rank[y]++;}
                }
            }
        }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m, k; cin >> n >> m >> k;

    // Solution
    UnionFind DSU(n);
    for(int i=0; i <= n-k; i++){
        int left = i, right = i+k-1;
        while(left < right){
            DSU.unionSet(left, right);
            left++; right--;
        }
    }

    int leaders = 0;
    for(int i=0; i < n; i++){ leaders += (DSU.findSet(i) == i);}

    // O/P
    cout << power(m, leaders) << endl;
    // TC = O(n*k)
}