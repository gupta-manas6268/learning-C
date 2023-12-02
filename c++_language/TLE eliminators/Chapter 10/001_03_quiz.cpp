// Here, we make a Code. In which we give sum of all subset of size 'k'
//                         from the Set.








#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    cout << sum << endl;

    for(int i = k; i<n; i++){
        sum -= a[i-k];
        sum += a[i];
        cout << sum << endl;
    }
}