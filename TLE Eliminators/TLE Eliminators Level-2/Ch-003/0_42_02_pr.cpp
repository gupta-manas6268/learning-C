// Correct.
// This is Mentor's code.

// G. Orray
// https://codeforces.com/problemset/problem/1742/G






































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
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}
        
        vector<int> visited(n, 0);
        vector<int> ans;

        int mask = 0, index = 0;
        // As, a[i] <= power(10, 9), then it can
        //  be stored in 30-bits in binary.
        for(int iter = 30; iter >= 0; iter--){
            int max_Mask = mask;
            int index = -1;

            for(int i=0; i<n; i++){
                if(!visited[i] && ((a[i] | mask) > max_Mask)){
                    max_Mask = (a[i] | mask);
                    index = i;
                }
            }

            if(index == -1){ break;}

            visited[index] = 1;
            ans.push_back(a[index]);
            mask |= max_Mask;
        }

        for(int i=0; i<n; i++){
            if(!visited[i]){
                ans.push_back(a[i]);
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

        // TC = O(30 * n)
        // TC = O(n).
    }
}