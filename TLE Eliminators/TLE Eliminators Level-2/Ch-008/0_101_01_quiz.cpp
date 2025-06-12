// See '0_101_02_quiz.cpp' carefully.
// Correct.

// Stick Lengths
// https://cses.fi/problemset/task/1074



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int solve(vector<long long> arr, int n){
    sort(arr.begin(), arr.end());
    long long temp = arr[n/2];
    long long ans = 0;

    for(auto it:arr){
        ans += abs(it - temp);  // abs -> mod(+ve part of no.)
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<long long> arr(n);
    for(auto &it:arr){ cin >> it;}
    int ans = solve(arr, n);
    cout << ans << endl;
}