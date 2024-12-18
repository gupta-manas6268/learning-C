// Correct.

// XxOoRr
// https://www.codechef.com/submit/XXOORR





































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

    int tc; cin >> tc;

    while (tc--){
        int n, k; cin >> n >> k;
        vector<int> A;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            A.push_back(temp);
        }

        int Places[32] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<32; j++){
                int temp = ((A[i] >> j) & 1);
                if(temp == 1){
                    Places[j]++;
                }
            }
        }

        int ans = 0;
        for(int i=0; i<32; i++){
            ans += (Places[i] / k);
            if((Places[i] % k) != 0){ ans++;}
        }

        cout << ans << endl;
    }
}