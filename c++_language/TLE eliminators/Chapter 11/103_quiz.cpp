// Quiz.1: Print all N numbers such that each value can
//          be from 0 to K.

// In simple, we have to print Cartesian Product.









#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n, k;
vector<int> v;

void solve(){
    if(v.size() == n){
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for(int i=0; i <= k; i++){
        v.push_back(i);
        solve();
        v.pop_back();
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> k;
    solve();
}