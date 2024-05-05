#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> v;
int recursion(int n){  // SC = O(pow(2, N) * N). 
    for(int i=0; i<n; i++){
        v.push_back(i);
    }
    int a[n];
    if(n <= 1) return n;
    return recursion(n-1) + recursion(n-2);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    recursion(n);  // Space Complexity = O(pow(n,2)).
}