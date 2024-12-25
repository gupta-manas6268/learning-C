// Correct.

// B. Fortune Telling
// https://codeforces.com/problemset/problem/1634/B









































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
        int n, x, y; cin >> n >> x >> y;
        vector<int> v(n);
        for(auto &it:v){ cin >> it;}

        int count = 0;  // count = no. of odd numbers.
        for(auto it:v){
            if(it&1){
                count++;
            }
        }

        if(count & 1){
            if((x&1) == (y&1)){
                cout << "Bob" << endl;
            }
            else{
                cout << "Alice" << endl;
            }
        }
        else{
            if((x&1) == (y&1)){
                cout << "Alice" << endl;
            }
            else{
                cout << "Bob" << endl;
            }
        }
    }
}