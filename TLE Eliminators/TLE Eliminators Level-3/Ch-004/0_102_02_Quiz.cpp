// From [01:01:00] of this Lecture-02.








// 

// E. Knapsack on a Segment
// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/E



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
    int n, s; cin >> n >> s;
    vector<int> weight, cost;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        weight.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        cost.push_back(temp);
    }

    // O/P
    
}