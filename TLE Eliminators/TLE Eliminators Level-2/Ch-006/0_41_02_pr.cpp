// Wrong.

// D - Coprime 2
// https://atcoder.jp/contests/abc215/tasks/abc215_d


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b){
    if(a == 0){ return b;}
    return gcd(b % a, a);
}

int LCM(int *arr, int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        temp = (temp * arr[i])/ gcd(temp, arr[i]);
    }

    return temp;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    int lcm = LCM(a, n);

    vector<int> ans;
    for(int i=1; i <= m; i++){
        if(gcd(lcm, i) == 1){
            ans.push_back(i);
        }
    }

    // TC = O(n + m).

    cout << ans.size() << endl;
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}