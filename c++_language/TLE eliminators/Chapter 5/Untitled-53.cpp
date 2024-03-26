// It is red because I haven't checked it that this answer is right or wrong, because I haven't login 'Hackerrank' at that time.



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
        int n; cin>>n;
        int ans = 0;

        for(int i=2; i <= n/2; i++){
            if((n % i == 0) && (i % 2 == 0)){
                ans++;
            }
        }
        if(n % 2 == 0){ ans++;}

        cout << ans << endl;t
    }
}