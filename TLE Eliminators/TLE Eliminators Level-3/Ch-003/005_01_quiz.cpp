// Correct.

// Q.: Minimum elements of all subarrays of size k.





























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sliding_window_minimum(vector<int> &a, int k){
    int n = a.size();
    vector<int> ans;
    deque<int> deq;

    for(int i=0; i<n; i++){
        while((!deq.empty()) && (a[deq.back()] >= a[i])){
            deq.pop_back();
        }
        deq.push_back(i);

        if(deq.front() == (i - k)){
            deq.pop_front();
        }
        if(i >= (k - 1)){
            ans.push_back(a[deq.front()]);
        }
    }

    return ans;

    // TC = O(n).
    //  by using, 'deque' we optimise TC from O(n * log(k))
    //    to O(n).
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}