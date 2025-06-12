// Find Square Root of a number?


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool func(int mid, int n){
    return mid*mid <= n;
}

void solve(){
    int n; cin >> n;
    int start_Index = 1, end_Index = n, ans = -1;
    while(start_Index <= end_Index){
        int mid = start_Index + (end_Index-start_Index)/2;
        if(func(mid, n)){
            ans = mid;
            start_Index = mid+1;
        }
        else{
            end_Index = mid-1;
        }
    }
    // TC = O(log(n)).
    
    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}