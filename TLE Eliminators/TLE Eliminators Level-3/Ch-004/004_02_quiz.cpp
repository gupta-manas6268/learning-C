// Correct.

// Q.2: Given an array find the length of longest
//       subarray with not more than K distinct elements




































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
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    // O/P
    map<int,int> mp;
    int left = 0, right = 0;
    int ans = -1;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        right++;

        if(mp.size() <= k){
            int length = (right - left);
            ans = max(ans,length);
        }
        else{
            mp[arr[left]]--;
            if(mp[arr[left]] == 0){
                mp.erase(arr[left]);
            }
            left++;
        }
    }

    cout << ans << endl;
    // TC = O(n * log(k)).
}