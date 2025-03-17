// Correct.

// Game of Piles Version 1
// https://www.codechef.com/problems/GAMEOFPILES1




































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
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}

        // Solution
        sort(a.begin(), a.end());

        if(a[0] == 1){ cout << "CHEF" << endl;}
        else{
            int sum = 0;
            for(int i=0; i<n; i++){ sum += a[i];}

            if(sum%2 == 0){ // even
                cout << "CHEFINA" << endl;
            }
            else{ // odd
                cout << "CHEF" << endl;
            }
        }
    }
}