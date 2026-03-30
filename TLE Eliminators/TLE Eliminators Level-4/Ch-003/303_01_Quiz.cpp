// Wrong.
// (This is Mentor's code. (MLE))

// D. Cunning Gena
// https://codeforces.com/problemset/problem/417/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;

// Solution
const int INF = LLONG_MAX >> 1;
struct person {
    int cost, monitor, mask;
    person(){
        cost = monitor = mask = 0;
    }
};

int f(int index, int mask, int m, vector<person>& arr, vector<vector<int>>& dp){ // MLE
// SC = O(n * pow(2, m)) ( => MLE)
    if(index == arr.size()){
        if(mask == ((1 << m) - 1)){ return 0;}
        else{ return INF;}
    }
    if(dp[index][mask] != -1){ return dp[index][mask];}

    return dp[index][mask] = min(f(index + 1, mask, m, arr, dp), 
                                arr[index].cost + f(index + 1, mask | (arr[index].mask), m, arr, dp));
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m, b; cin >> n >> m >> b;
    vector<person> arr(n);
    for(auto &i : arr){
        cin >> i.cost >> i.monitor;
        int size, mask = 0; cin >> size;
        for(int i=0; i < size; i++){
            int x; cin >> x; x--;
            mask |= (1 << x);
        }
        i.mask = mask;
    }

    // Solution
    sort(arr.begin(), arr.end(), [&](person &l, person &r){
        return l.monitor > r.monitor;
    });

    int ans = LLONG_MAX;
    vector<vector<int>> dp(n, vector<int> ((1 << m), -1));

    for(int i=0; i < n; i++){
        ans = min(ans, f(i, 0, m, arr, dp) + (arr[i].monitor * b));
    }

    // O/P
    if(ans >= INF){ cout << -1 << endl;}
    else{ cout << ans << endl;}
    // 
    // SC = O(n * pow(2, m)) ( => MLE)
}