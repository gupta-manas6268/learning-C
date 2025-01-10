// Correct.

// C. Che city
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/C




































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
    int n, r; cin >> n >> r;
    vector<int> dis;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        dis.push_back(temp);
    }

    // O/P
    int ans = 0;
    for(int left = 0, right = 1; right < n; right++){
        while((dis[right] - dis[left]) > r){
            ans += (n - right);
            left++;
        }
    }

    cout << ans << endl;
}