// Correct.

// A. Halloumi Boxes
// https://codeforces.com/problemset/problem/1903/A

































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
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        if(k >= 2){ cout << "YES" << endl;}
        else{
            vector<int> b;
            b = a;
            sort(b.begin(), b.end());
            bool ans = true;
            for(int i=0; i<n; i++){
                if(a[i] != b[i]){
                    ans = false; break;
                }
            }

            if(ans == true){ cout << "YES" << endl;}
            else{ cout << "NO" << endl;}
        }
    }
}