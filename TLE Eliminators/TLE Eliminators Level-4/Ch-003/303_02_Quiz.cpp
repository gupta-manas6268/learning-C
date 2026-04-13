// Correct.
// (This is Mentor's code.)

// D. Cunning Gena
// https://codeforces.com/problemset/problem/417/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
struct person {
    int cost, monitor, mask;
    person(){
        cost = monitor = mask = 0;
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m, b; cin >> n >> m >> b;
    vector<person> arr(n);
    for(auto &p : arr){
        cin >> p.cost >> p.monitor;
        int size; cin >> size;
        int temp_Mask = 0;
        for(int i=0; i < size; i++){
            int x; cin >> x; x--;
            temp_Mask |= (1 << x);
        }
        p.mask = temp_Mask;
    }

    // Solution
    sort(arr.begin(), arr.end(), [&](const person &l, const person &r){
        return l.monitor > r.monitor;
    });

    int full_Mask = ((1LL << m) - 1);
    int dp_Current[1 << 20], dp_Next[1 << 20];

    for(int mask = 0; mask < (1 << m); mask++){
        dp_Next[mask] = (mask == full_Mask ? 0 : INF);
    }

    vector<int> best(n, INF);
    for(int i = n-1; i >= 0; i--){
        for(int mask = 0; mask < (1 << m); mask++){
            int cost_Skip = dp_Next[mask];
            int cost_Take = (arr[i].cost >= INF ? INF : arr[i].cost) + dp_Next[mask | arr[i].mask];
            dp_Current[mask] = min(cost_Skip, cost_Take);
        }

        best[i] = dp_Current[0];
        for(int mask = 0; mask < (1 << m); mask++){
            dp_Next[mask] = dp_Current[mask];
        }
    }

    int ans = INF;
    for(int i=0; i < n; i++){
        if(best[i] < INF){
            ans = min(ans, best[i] + (arr[i].monitor * b));
        }
    }

    // O/P
    if(ans >= INF){ cout << -1 << endl;}
    else{ cout << ans << endl;}
    // 
    // 
}