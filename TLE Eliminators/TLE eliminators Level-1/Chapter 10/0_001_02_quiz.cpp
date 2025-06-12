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
    
    int left = 0; // from which point are all the values distinct
    map<int, int> prev_occ; // stores when each element last occured
    // prev_occ =→ previous occurence

    for(int right=0; right<n; right++){
        if(prev_occ.count(a[right]) && prev_occ[a[right]] >= left){
            left = prev_occ[a[right]] + 1;
        }
        else{
            prev_occ[a[right]] = right;
        }
        maxi = max(maxi, right-left+1);
    }
    cout << maxi << endl;

    // TC = O(n).
}