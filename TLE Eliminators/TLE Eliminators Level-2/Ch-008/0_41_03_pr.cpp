// This is Mentor's code.
// Correct.

// Gray Code
// https://cses.fi/problemset/task/2205


















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

    int n; cin >> n;
    vector<string> v = {"0", "1"};
    for(int i=2; i <= n; i++){
        int end = v.size() - 1;

        while(end >= 0){
            v.push_back(v[end]);
            end--;
        }

        int count = pow(2, i);
        for(int j=1; j <= count; j++){
            if(j <= (count/2)){
                v[j-1] = "0"+v[j-1];
            }
            else{
                v[j-1] = "1"+v[j-1];
            }
        }
    }

    for(auto it:v){ cout << it << endl;}

    // TC = O(n * pow(2,n)).
}