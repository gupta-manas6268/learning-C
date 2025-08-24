#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class Compare{
public:
    bool operator()(pair<int, int> &p1, pair<int, int> &p2){
        // return true if priority of p1 less than priority of p2
        if(p1.first == p2.first){
            return p1.second > p2.second;
        }
        return p1.first > p2.first;
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    pq.push({1,2});
    pq.push({1,3});
    pq.push({0,4});

    pq.push({1,8});  // Priority - 1
    pq.push({1,9});  // Priority - 2
    pq.push({2,1});  // Priority - 3
    cout << pq.top().first << " " << pq.top().second << endl;
    pq.pop();
    cout << pq.top().first << " " << pq.top().second << endl;
}