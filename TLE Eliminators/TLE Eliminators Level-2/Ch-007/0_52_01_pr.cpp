// Correct.
// (This is My code in 2nd Revision time.)

// A. Valeriy and Deque
// https://codeforces.com/problemset/problem/1179/A



































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
    int n, q; cin >> n >> q;
    int maxi = -1;
    deque<int> deq;
    for(int i=0; i < n; i++){ 
        int temp; cin >> temp;
        deq.push_back(temp);
        maxi = max(maxi, temp);
    }
    vector<int> m(q);
    for(int i=0; i < q; i++){ cin >> m[i];}

    // Solution
    vector<pair<int,int>> query;
    while(deq.front() != maxi){
        int A = deq.front();
        deq.pop_front();
        int B = deq.front();
        deq.pop_front();
        
        if(A > B){
            deq.push_front(A);
            deq.push_back(B);
        }
        else{
            deq.push_front(B);
            deq.push_back(A);
        }
        query.push_back({A, B});
        // cout << "Query: " << A << " " << B << endl;
    }
    int Size_1 = query.size();

    vector<pair<int,int>> loop;
    for(int i=0; i < n-1; i++){
        int A = deq.front();
        deq.pop_front();
        int B = deq.front();
        deq.pop_front();
        
        deq.push_front(A);
        deq.push_back(B);

        loop.push_back({A, B});
        // cout << "Loop: " << A << " " << B << endl;
    }
    
    vector<pair<int,int>> ans(q);
    for(int i=0; i < q; i++){
        if(m[i] <= Size_1){
            ans[i] = query[m[i]-1];
        }
        else{
            m[i] -= Size_1;
            ans[i] = loop[(m[i]-1) % (n-1)];
        }
    }
    
    // O/P
    for(int i=0; i < q; i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}