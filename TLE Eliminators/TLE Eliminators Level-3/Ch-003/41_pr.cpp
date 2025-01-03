// It is Same as '101_Quiz.cpp'.

// Correct.

// Sliding Window Median
// https://cses.fi/problemset/task/1076



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> medianSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    multiset<int> low, high;
    vector<int> medians;

    for(int i=0; i < n; i++){
        low.insert(nums[i]);
        high.insert(*low.rbegin());  // Largest element from Low
                                     //  to High multiset.
        low.erase(low.find(*low.rbegin()));

        if(low.size() < high.size()){
            low.insert(*high.begin());
            high.erase(high.find(*high.begin()));
        }

        if(i >= (k-1)){
            if(k & 1){ // odd
                medians.push_back(*low.rbegin());
            }
            else{ // even
                int temp = min(*low.rbegin(), *high.begin());
                medians.push_back(temp);
            }

            if(nums[i - k + 1] <= *low.rbegin()){
                low.erase(low.find(nums[i - k + 1]));  // Erase from multiset.
            }
            else{
                high.erase(high.find(nums[i - k + 1]));
            }
        }
    }

    return medians;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> x;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        x.push_back(temp);
    }

    vector<int> ans = medianSlidingWindow(x,k);
    int Size = ans.size();
    for(int i=0; i<Size; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}