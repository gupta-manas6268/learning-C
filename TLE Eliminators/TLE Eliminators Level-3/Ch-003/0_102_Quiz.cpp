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

vector<int> SlidingWindowCost(vector<int> nums, int k) {
    int n = nums.size();
    multiset<int> low, high;
    vector<int> Cost;
    int low_Sum = 0, high_Sum = 0;

    for(int i=0; i < n; i++){
        low.insert(nums[i]);
        low_Sum += nums[i];

        high.insert(*low.rbegin());  // Largest element from Low
                                         //  to High multiset.
        high_Sum += *low.rbegin();

        low.erase(low.find(*low.rbegin()));
        low_Sum -= *low.rbegin();

        if(low.size() < high.size()){
            low.insert(*high.begin());
            low_Sum += *high.begin();

            high.erase(high.find(*high.begin()));
            high_Sum -= *high.begin();
        }

        if(i >= (k-1)){
            if(k & 1){ // odd
                int Median = *low.rbegin();
                int Size = low.size() + high.size();
                int cost = abs((Median * Size) - (low_Sum + high_Sum));
                Cost.push_back(cost);

            }
            else{ // even
                int Median_1 = *low.rbegin();
                int Median_2 = *high.begin();
                int Size = low.size() + high.size();
                int cost_1 = abs((Median_1 * Size) - (low_Sum + high_Sum));
                int cost_2 = abs((Median_2 * Size) - (low_Sum + high_Sum));
                int cost = min(cost_1, cost_2);
                Cost.push_back(cost);
            }

            if(nums[i - k + 1] <= *low.rbegin()){
                low.erase(low.find(nums[i - k + 1]));  // Erase from multiset.
                low_Sum -= nums[i - k + 1];
            }
            else{
                high.erase(high.find(nums[i - k + 1]));
                high_Sum -= nums[i - k + 1];
            }
        }
    }

    return Cost;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){ 
        int temp; cin >> temp;
        a.push_back(temp);
    }

    // O/P
    vector<int> ans = SlidingWindowCost(a, k);
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}