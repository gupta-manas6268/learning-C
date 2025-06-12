// Wrong.

// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    for(int i=1; (2*i + 1) <= n; i++){
        int j = 2*i + 1;
    }
}