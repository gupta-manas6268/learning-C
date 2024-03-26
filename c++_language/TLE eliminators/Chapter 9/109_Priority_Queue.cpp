#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // priority_queue <int> pq {4, 1, 2, 7, 2, 8}; // This line will show error, if we uncomment the code.
    priority_queue <int> pq_1;

    pq_1.push (8);
    pq_1.push (1);
    pq_1.push (2);
    pq_1.push (7);
    pq_1.push (2);
    pq_1.push (9);

    // top() -→ element at the top
    // push() -→ push the element into the priority queue
    // pop() -→ pop out the top element
    // size() -→ return you the size
    // empty() -→ whether the priority queue is empty or not

    while (!pq_1.empty()){
        cout << pq_1.top() << " ";
        pq_1.pop();
    } 
    cout << endl; 

    // I could do the same thing with set then 
    //  why 'priority_queue'.
    // In set the problem that it doesn't have the same value twice.

    multiset <int> st; // In 'multiset' we can have duplicates
    // TC -→ O(log(N)) + O(constant factor)
    // priority queue is faster, because it has small 'constant factor'

    // What should you use?
    // Ans-→ 'multiset' because it has many functionalities. Ex-→ *st.begin();, *st.rbegin();, st.lower_bound;, etc.
    //         But if I know that I don't have to use any of them and 
    //          the constraints are tight, so I would use 'priority_queue', because TC(priority_queue) < TC(multiset)
    

    priority_queue <int, vector<int>, greater<int>> pq_2;

    pq_2.push (8);
    pq_2.push (1);
    pq_2.push (2);
    pq_2.push (7);
    pq_2.push (2);
    pq_2.push (9);

    while (!pq_2.empty()){
        cout << pq_2.top() << " ";
        pq_2.pop();
    } 
    cout << endl;

}