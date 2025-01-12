// Correct.
// This is Mentor's code.
// As, (1 <= n <= 1000), i.e. we can have TC = O(pow(n,2)).
//  So, Mentor solve it in O(pow(n,2)) time.

// A. Looped Playlist
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/A

































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
    int n, p; cin >> n >> p;
    int sum_total = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum_total += arr[i];
    }

    // O/P
    int temp = 0;
    if(p > sum_total){
        temp += (p / sum_total);
        p %= sum_total;
    }
    int start = -1, count = INT_MAX;
    for(int i=0; i<n; i++){
        int sum = 0;
        int j = i;
        int taken = 0;
        while(sum < p){
            sum += arr[j];
            taken++;
            j = (j + 1) % n;
        }
        if(taken < count){
            count = taken;
            start = i;
        }
    }

    int left = (start + 1);
    int ans = (count + (temp * n));
    cout << left << " " << ans << endl;
}