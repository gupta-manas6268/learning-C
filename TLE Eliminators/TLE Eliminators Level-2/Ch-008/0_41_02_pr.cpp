// Wrong.

// Gray Code
// https://cses.fi/problemset/task/2205



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
vector<int> vec;
void solve(string s){
    if(s.size() == n){
        cout << s << endl;

        return;
    }

    solve(s + "0"); // O(N) 
    solve(s + "1"); // O(N)

    // string t = s + "0";
    // string u = s + "1";

    // solve(t);
    // solve(u);

}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    int count = 0;
    solve();
    
}