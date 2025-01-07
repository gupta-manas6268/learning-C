// Given 2 sorted arrays, for each element in 1st
// array find number of elements smaller than that in
// the 2nd array





































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Inversion(vector<int> a, vector<int> b){
    int n = a.size(), m = b.size();
    vector<int> ans(n, 0);

    int i=0, j=0;
    while(i < n){
        while((j < m) && (b[j] < a[i])){
            j++;
        }
        ans[i] = j;
        i++;
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<int> a, b;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        b.push_back(temp);
    }

    // O/P
    vector<int> ans = Inversion(a, b);
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    // TC = O(n + m).
}