// Correct.

// This is Home-Work Question.
// [Hint: Solve it like '005_01_quiz.cpp'.]

// Q.: Maximum elements of all subarrays of size k.

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sliding_window_maximum(vector<int> &a, int k){
    int n = a.size();
    vector<int> ans;
    deque<int> deq;

    for(int i=0; i<n; i++){
        while((deq.empty() != true) && (a[deq.back()] <= a[i])){
            deq.pop_back();
        }
        deq.push_back(i);

        if(deq.front() == (i-k)){
            deq.pop_front();
        }
        if(i >= (k-1)){
            ans.push_back(a[deq.front()]);
        }
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    vector<int> ans = sliding_window_maximum(a, k);
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}