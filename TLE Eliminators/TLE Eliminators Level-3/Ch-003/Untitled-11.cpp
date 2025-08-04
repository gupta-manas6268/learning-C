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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    vector<int> ans;
    deque<int> deq;
    deq.push_back(0);
    for(int i=1; i < k; i++){
        if(a[i] < a[deq.back()]){
            deq.pop_back();
        }
        deq.push_back(i);
    }
    for(int i=k; i < n; i++){
        ans.push_back(a[deq.front()]);
        
        if(deq.front() == (i-k)){
            deq.pop_front();
        }
        if(a[i] < a[deq.back()]){
            deq.pop_back();
        }
        deq.push_back(i);
    }
    ans.push_back(a[deq.front()]);

    // O/P
    for(int i=0; i < ans.size(); i++){ cout << ans[i] << endl;}
    // TC = O(n)
}