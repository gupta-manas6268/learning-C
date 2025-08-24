// min PQ -> min Priority Queue.

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

    // Min Priority Queue.
    priority_queue<int, vector<int>, greater<int>> pq;
    // It arranges elements in a increasing-order in which
    //  top element is the smallest element.
    pq.push(9);
    pq.push(5);
    pq.push(11);
    pq.push(14);
    pq.push(8);
    pq.push(1);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << pq.empty() << endl;  // O(1)
    cout << pq.size() << endl;   // O(1)
}