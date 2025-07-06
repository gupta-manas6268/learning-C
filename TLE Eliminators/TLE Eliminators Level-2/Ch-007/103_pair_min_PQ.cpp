// min PQ -> min Priority Queue.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Min Priority Queue.
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // Priority is in increasing order.
    pq.push({1,8});  // Priority - 1
    pq.push({1,9});  // Priority - 2
    pq.push({2,1});  // Priority - 3
    cout << pq.top().first << " " << pq.top().second << endl;
    pq.pop();
    cout << pq.top().first << " " << pq.top().second << endl;
}