// Correct.

// Q.1: Given an array of positive integers find the length
//       of longest subarray with sum <= K




































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
    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    // O/P
    int left = 0, right = 0;
    int sum = 0;
    int ans = -1;
    for(int i=0; i<n; i++){
        sum += a[i];
        right++;
        if(sum <= k){
            int length = (right - left);
            ans = max(ans,length);
        }
        else{
            sum -= a[left];
            left++;
        }

    }

    cout << ans << endl;
    // TC = O(n).
}