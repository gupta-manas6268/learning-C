#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Target(1e6+10, 0);
void solve(vector<int>& candidates, int target, int index){
    for(int i = 0; i < candidates.size(); i++){
        if(target >= candidates[i]){
            if((target-candidates[i]) == 0){
                Target[target]++;
            }
            else if(Target[target-candidates[i]] != 0){
                Target[target] += Target[target-candidates[i]];
                continue;
            }
            else{
                solve(candidates, target-candidates[i], i);
                Target[target] += Target[target-candidates[i]];
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    // I/P
    int n, x; cin >> n >> x;
    vector<int> c(n);
    for(int i=0; i < n; i++){ cin >> c[i];}
    
    // Solution
    sort(c.begin(), c.end());
    solve(c, x, 0);
    
    // O/P
    int ans = Target[x];
    cout << ans << endl;
}