#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Debugging Checklist:
// 1. Edge cases
// 2. Overflow
// 3. Wrong loops
// 4. Something you normally repeat, etc.

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, q; cin >> n >> q;
    vector<int> a(n); 
    for(auto &i : a){ cin >> i;}
    
    // Solution
    int LOG = log2(n);
    vector<int> log_Table(n + 1);
    vector<vector<int>> t(LOG + 1, vector<int> (n, INT_MAX));

    for(int i=2; i <= n; i++){ log_Table[i] = (log_Table[i/2] + 1);}
    for(int i=0; i < n; i++){ t[0][i] = a[i];}

    for(int i=1; i <= LOG; i++){
        for(int j=0; (j + (1 << (i - 1))) < n; j++){
            t[i][j] = min(t[i-1][j], t[i-1][j + (1 << (j-1))]);
        }
    }

    // Implementation of O(1) Range Queries (↓)
    auto query = [&](int left, int right){ // O(1)
        int len = (right - left + 1); // len => length
        int p = log_Table[len];
        return min(t[p][left], t[p][right - (1 << p) + 1]);
    };
    
    for(int i=0; i < q; i++){
        int l, r; cin >> l >> r;
        cout << query(l - 1, r - 1) << endl;
    }
    // Implementation of O(1) Range Queries (↑)
    
    
    // Implementation of O(log(n)) Range Queries (↓)
    auto query = [&](int index, int len){
        int sum = 0;

        for(int i = 0; i <= LOG; i++){
            if(len & (1 << i)){
                sum += t[i][index];
                index += (1 << i);
            }
        }

        return sum;
    };

    for(int i=0; i < q; i++){
        int l, r; cin >> l >> r;
        cout << query(l - 1, (r - l + 1)) << endl;
    }
    // Implementation of O(log(n)) Range Queries (↑)
}