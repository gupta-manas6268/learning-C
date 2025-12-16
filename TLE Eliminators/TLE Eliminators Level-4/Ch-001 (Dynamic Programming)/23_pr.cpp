// 

// B. Mashmokh and ACM
// https://codeforces.com/contest/414/problem/B



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> temp;
int ans = 0;
void solve(int n, int k){
    if(temp.size() == k){
        ans++;
        ans %= MOD;
        return;
    }
    int top = temp[temp.size()-1];
    int j = top;
    while(j <= n){
        temp.push_back(j);
        solve(n, k);
        temp.pop_back();
        j += top;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k; cin >> n >> k;

    // Solution
    for(int i=1; i <= n; i++){
        temp.push_back(i);
        solve(n, k);
        temp.pop_back();
    }

    // O/P
    cout << ans << endl;
}