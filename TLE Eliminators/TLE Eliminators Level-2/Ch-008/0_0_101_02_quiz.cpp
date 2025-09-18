// See line-44 and 45 in this code carefully.
// Correct.

// Stick Lengths
// https://cses.fi/problemset/task/1074




















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
    int n; cin >> n;
    vector<int> a;
    // vector<int> a(n);  // This line will give me wrong OUTPUT. 
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());

    // Solution
    int median_1, median_2;
    int ans_1 = 0;
    int ans_2 = 0;
    int ans;
    if(n%2 != 0){
        median_1 = (n/2);
        for(int i=0; i<n; i++){
            ans_1 += abs(a[i] - a[median_1]);
        }
        ans = ans_1;
    }
    else{
        median_1 = (n/2 - 1);
        median_2 = (n/2);
        for(int i=0; i<n; i++){
            ans_1 += abs(a[i] - a[median_1]);
            ans_2 += abs(a[i] - a[median_2]);

            ans = min(ans_1, ans_2);
        }
    }

    // O/P
    cout << ans << endl;
}