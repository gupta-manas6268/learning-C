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
    int maxi = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<n; i++){
        set<int> s;
        for(int j = i; j<n; j++){
            if(s.count(a[j])){ // if (s.count(a[j])) =→ if a[j], already exist in the set, then we will break.
                break;
            }
            else{
                s.insert(a[j]);
            }

            maxi = max(maxi, (int) s.size());
        }

    }
    cout << maxi << endl;

    // TC = O(i * j)
    // TC = O(pow(n, 2))
}