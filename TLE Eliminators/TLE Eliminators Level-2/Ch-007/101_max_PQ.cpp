// max PQ -> max Priority Queue.

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

    // Max Priority Queue.
    priority_queue<int> pq;
    // It arranges elements in a decreasing-order in which
    //  top element is the largest element.

    pq.push(9);  // O(log(n))
    pq.push(5);
    pq.push(11);
    pq.push(14);
    pq.push(8);
    pq.push(1);
    cout << pq.top() << endl;
    pq.pop();    // O(log(n))
    cout << pq.top() << endl;

    cout << pq.empty() << endl;  // O(1)
    cout << pq.size() << endl;   // O(1)
}