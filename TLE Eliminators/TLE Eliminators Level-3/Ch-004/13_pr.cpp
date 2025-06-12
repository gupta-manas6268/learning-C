// Correct.

// B. Total Length
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/B




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int func(int n){
    int ans = (n * (n+1))/2;
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, s; cin >> n >> s;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    // O/P
    int sum = 0;
    int ans = 0;
    for(int left = 0, right = 0; right < n; right++){
        sum += arr[right];
        while(sum > s){
            sum -= arr[left];
            left++;
        }
        if(sum <= s){
            ans += func(right - left + 1);
        }
    }

    cout << ans << endl;
}