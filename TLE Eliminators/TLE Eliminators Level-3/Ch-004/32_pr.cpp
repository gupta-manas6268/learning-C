// Correct.

// B. Books
// https://codeforces.com/contest/279/problem/B




































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
    int n, t; cin >> n >> t;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    // O/P
    int curr_time = 0;
    int ans = 0;
    for(int left = 0, right = 0; right < n; right++){
        curr_time += arr[right];
        if(curr_time > t){
            ans = max(ans, right-left);
            curr_time -= arr[left];
            left++;
        }
        else{
            ans = max(ans, right-left+1);
        }
    }

    cout << ans << endl;
}