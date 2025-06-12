// Correct.
// This is Mentor's code.

// C. Keshi Is Throwing a Party
// https://codeforces.com/problemset/problem/1610/C



































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
        // I/P
        int n; cin >> n; 
        // 1st person has 1-dollar.
        // i'th person has i-dollars.
        vector<int> a(n + 1), b(n + 1);
        for(int i=1; i<=n; i++){
            cin >> a[i] >> b[i];
        }

        // O/P

        // Greedy => don't think just go & check for each
        //            no. continuosly.

        int left = 1, right = n + 1;
        // l = true, invite l-people, s.t. all happy
        // r = false,  .. aren't happy
        while((left + 1) < right){ // breaks when, l+1 = r.
        // O(log(n))
            int mid = (left + right)/ 2;

            bool ok = false;
            int taken = 0;

            // checker function
            for(int i=1; i <= n; i++){  // O(n)
                if((b[i] >= taken) && (a[i] >= (mid - taken - 1))){
                    taken++;
                }
                if(taken == mid){ break;}
            }
            if(taken == mid){
                ok = true;
            }

            if(ok == true){
                left = mid;
            }
            else{
                right = mid;
            }
        }

        cout << left << endl;
        // TC = O(n * log(n)).
    }
}