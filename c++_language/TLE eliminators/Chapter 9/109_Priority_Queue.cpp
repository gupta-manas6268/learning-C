#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // priority_queue <int> pq {4, 1, 2, 7, 2, 8}; // This line will show error, if we uncomment the code.
    priority_queue <int> pq;

    pq.push (8);
    pq.push (1);
    pq.push (2);
    pq.push (7);
    pq.push (2);
    pq.push (9);

    // top() -→ element at the top
    // push() -→ push the element into the priority queue
    // pop() -→ pop out the top element
    // size() -→ return you the size
    // empty() -→ whether the priority queue is empty or not

    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    } 
    cout << endl; 

    // I could do the same thing with set then 
    //  why 'priority_queue'.
    // In set the problem that it doesn't have the same value twice.

    multiset <int> st; // In 'multiset' we can have duplicates
    // TC -→ O(log(N)) + O(constant factor)
    // priority queue is faster, because it has small 'constant factor'
    
    // *st.begin();
    
}