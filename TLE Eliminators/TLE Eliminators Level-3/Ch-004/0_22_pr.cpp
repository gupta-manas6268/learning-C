// Correct.
// I write this code with the help of ChatGPT, where
//  ChatGPT only checks a bug in my code.

// F. Segments with Small Spread
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F


































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
    int ans = 0;
    deque<int> Min, Max;
    for(int left = 0, right = 0; right < n; right++){
        while((Min.empty() != true) && (arr[right] <= arr[Min.back()])){
            Min.pop_back();
        }
        Min.push_back(right);
        while((Max.empty() != true) && (arr[right] >= arr[Max.back()])){
            Max.pop_back();
        }
        Max.push_back(right);

        int diff = (arr[Max.front()] - arr[Min.front()]);
        while(diff > k){
            if(Min.front() == left){
                Min.pop_front();
            }
            if(Max.front() == left){
                Max.pop_front();
            }
            left++;
            diff = (arr[Max.front()] - arr[Min.front()]);
        }

        ans += (right - left + 1);
    }

    cout << ans << endl;
    // TC = O(n).
}