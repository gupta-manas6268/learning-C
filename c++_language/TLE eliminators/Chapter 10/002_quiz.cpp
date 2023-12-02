#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n, c; cin >> n >> c;

        int a[n+1];
        for(int i=1; i<=n; i++){
            cin >> a[i], a[i] += i;
        }

        sort(a+1, a+1+n);

        int count = 0;
        for(int i=1; i <= n; i++){
            if(a[i] > c){
                break;
            }
            else{
                c -= a[i];
                count++;
            }
        }

        cout << count << endl;
    }
}