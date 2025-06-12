// This is Mentor's code.
// Correct.

// V. Creating Expression1
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool solve(int index, int value, int arr[], int x, int n){
    if(index == n){
        return value==x;
    }

    bool ans1 = solve(index+1, value-arr[index], arr, x, n);
    bool ans2 = solve(index+1, value+arr[index], arr, x, n);
    return ans1||ans2;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, x; cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    if(solve(1, arr[0], arr, x, n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}