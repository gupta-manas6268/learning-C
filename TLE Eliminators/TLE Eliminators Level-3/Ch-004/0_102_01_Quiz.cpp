// Wrong.

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
    int left = 0, right = 0;
    int Total_Weight = 0, Total_Cost = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        Total_Weight += weight[i];
        if(Total_Weight > s){
            ans = max(ans, Total_Cost);
            Total_Weight -= weight[left];
            Total_Cost -= cost[left];
            left++;
        }
        Total_Cost += cost[i];
    }
    if(Total_Weight < s){
        ans = max(ans, Total_Cost);
    }

    cout << ans << endl;
}