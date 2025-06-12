// Correct.

// B. Mainak and Interesting Sequence
// https://codeforces.com/problemset/problem/1726/B






































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
        int n, m; cin >> n >> m;

        bool ans = false;
        vector<int> Ans;
        if(n == 1){
            ans = true;
            Ans.push_back(m);
        }
        else{
            if(n%2 == 0){
                for(int i=0; i<(n-2); i++){
                    Ans.push_back(1);
                }
            }
            else{
                for(int i=0; i<(n-1); i++){
                    Ans.push_back(1);
                }
            }
        }

        if(ans == false){
            if(n%2 == 0){
                m -= (n-2);

                if((m%2 == 0) && (m > 0)){
                    ans = true;
                    Ans.push_back(m/2);
                    Ans.push_back(m/2);
                }
            }
            else{
                m -= (n-1);
                if(m > 0){
                    ans = true;
                    Ans.push_back(m);
                }
            }
        }

        if(ans == true){
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                cout << Ans[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}