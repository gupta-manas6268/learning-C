#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// comparator for priority queue
int compare(int bottom, int top){
    if(top % 2 == 1 && bottom % 2 == 0) return true;
    if(top % 2 == 0 && bottom % 2 == 1) return false;
    return top < bottom;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    priority_queue <int, vector<int>, decltype(&compare)> pq_1(compare);   // decltype -→ declare type

    pq_1.push (8);
    pq_1.push (1);
    pq_1.push (2);
    pq_1.push (7);
    pq_1.push (2);
    pq_1.push (9);

    while (!pq_1.empty()){
        cout << pq_1.top() << " ";
        pq_1.pop();
    } 
    cout << endl; 


    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    // So, if we want to use 'pair' in priority queue, then we have to write this much long 
    //      that's why people's generally don't use priority queue.



    // 'ordered_set' is not a DS(Data Structure) in STL
    //      but it is present in PBDS(Policy Base Data Structure)
}