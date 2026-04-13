// 

// This is Home-Work Question.

// Sliding Window Cost
// https://cses.fi/problemset/task/1077


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
vector<int> medianSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    multiset<int> low, high;
    vector<int> ans;

    int low_sum = 0, high_sum = 0;
    for(int i=0; i < n; i++){
        low_sum += nums[i];
        low.insert(nums[i]);

        high_sum += (*low.rbegin());
        high.insert(*low.rbegin());  

        low_sum -= (*low.rbegin());
        low.erase(low.find(*low.rbegin()));

        if(low.size() < high.size()){
            low_sum += (*high.begin());
            low.insert(*high.begin());

            high_sum -= (*high.begin());
            high.erase(high.find(*high.begin()));
        }

        if(i >= (k-1)){
            int median = (*low.rbegin());

            int temp = ((median * low.size()) - low_sum) + ((median * high.size()) - high_sum);
            ans.push_back(temp);

            if(nums[i - k + 1] <= *low.rbegin()){
                low_sum -= (nums[i - k + 1]);
                low.erase(low.find(nums[i - k + 1]));  // Erase from multiset.
            }
            else{
                high_sum -= (nums[i - k + 1]);
                high.erase(high.find(nums[i - k + 1]));
            }
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

    // I/P
    int n, k; cin >> n >> k;
    vector<int> x(n);
    for(int i=0; i < n ; i++){ cin >> x[i];}

    // O/P
    vector<int> ans = medianSlidingWindow(x, k);
    for(int i=0; i < ans.size(); i++){ cout << ans[i] << " ";}
}