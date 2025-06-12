// Correct.

// A. How Much Does Daytona Cost?
// https://codeforces.com/contest/1878/problem/A



















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
        int n, k; cin >> n >> k;
        vector<int> vec;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            vec.push_back(a);
        }

        vector<int> :: iterator it;
        it = find(vec.begin(), vec.end(), k);

        if(it != vec.end()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}