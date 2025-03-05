// Correct.
// This is My version of Mentor's code.
//  (Hint: See Page-7 of Register Notes- Advanced No. Theory.)

// A. Row GCD
// https://codeforces.com/problemset/problem/1458/A


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){ cin >> a[i];}
    for(int i=0; i<m; i++){ cin >> b[i];}

    // Solution
    int prev_GCD = 1;
    for(int i=2; i<n; i++){
        if(i == 2){
            prev_GCD = __gcd(abs(a[i]-a[0]), abs(a[i-1]-a[0]));
        }
        else{
            prev_GCD = __gcd(abs(a[i]-a[0]), prev_GCD);
        }
    }
    int Final_GCD[m];
    for(int j=0; j<m; j++){
        if(n == 1){
            Final_GCD[j] = (a[0] + b[j]);
        }
        else{
            Final_GCD[j] = __gcd(a[0]+b[j], prev_GCD);
        }
    }

    // O/P
    for(int j=0; j<m; j++){
        cout << Final_GCD[j] << " ";
    }
    cout << endl;
}