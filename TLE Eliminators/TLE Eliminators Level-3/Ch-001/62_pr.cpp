// Correct.

// C. Sagheer and Nubian Market
// https://codeforces.com/problemset/problem/812/C




































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

    // I/P
    int n, S; cin >> n >> S;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    int left = 1, right = n;
    int k = 0, T = 0;
    while(left <= right){ // O(log(n))
        int mid = (left + right) / 2;

        vector<int> new_a(n);
        for(int i=0; i < n; i++){ // O(n)
            new_a[i] = (a[i] + (mid * (i+1)));
        }
        sort(new_a.begin(), new_a.end()); // O(n * log(n))

        int cost = 0;
        for(int i=0; i < mid; i++){
            cost += new_a[i];
        }

        if(cost <= S){
            k = mid; T = cost;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    // O/P
    cout << k << " " << T << endl;
    // TC = O(n * power(log(n), 2))
}