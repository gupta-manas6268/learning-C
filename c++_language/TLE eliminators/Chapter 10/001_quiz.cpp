#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++){
        set<int> s;
        for(int j = i; j<n; j++){
            if(s.count(a[j]))
                break;

            s.insert(a[j]);
        }
    }
}