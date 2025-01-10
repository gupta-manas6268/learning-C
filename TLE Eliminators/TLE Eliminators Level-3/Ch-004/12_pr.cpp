// Correct.
// This is My code.

// E. Segments with Small Set
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E




































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
    int ans = 0;
    for(int left = 0, right = 0; right < n; right++){
        mp[arr[right]]++;
        while(mp.size() > k){
            mp[arr[left]]--;
            if(mp[arr[left]] == 0){
                mp.erase(arr[left]);
            }
            left++;
        }
        if(mp.size() <= k){
            ans += (right - left + 1);
        }
    }

    cout << ans << endl;
}