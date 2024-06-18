// Time Limit Exceeded.

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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    vector<int> k;
    k.push_back(1);
    for(int i=2; i <= m; i++){
        bool add = true;
        for(int j=0; j<n; j++){
            if(gcd(a[j], i) != 1){
                add = false;
                break;
            }
        }

        if(add == true){
            k.push_back(i);
        }
    }
    // TC = O(n * m).

    cout << k.size() << endl;
    for(int i=0; i < k.size(); i++){
        cout << k[i] << endl;
    }
}