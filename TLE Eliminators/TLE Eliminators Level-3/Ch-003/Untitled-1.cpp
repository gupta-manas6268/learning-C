// 

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

    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    map<int,int> mp;
    int sum = 0;
    for(int i=0; i<k; i++){
        mp[a[i]]++;
        sum += a[i];
    }

    bool first = false;
    int ans = 0;
    if(mp.size() == k){
        if(first == false){
            ans = sum; first = true;
        }
        else{
            ans = max(ans,sum);
        }
    }

    for(int i=k; i<n; i++){
        mp[a[i-k]]--;
        if(mp[a[i-k]] == 0){
            mp.erase(a[i-k]);
        }
        mp[a[i]]++;

        sum += a[i];
        sum -= a[i-k];

        if(mp.size() == k){
            if(first == false){
                ans = sum; first = true;
            }
            else{
                ans = max(ans,sum);
            }
        }
    }

    cout << ans << endl;
}







class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<double> ans;
        for(int i = (k-1); i<n; i++){
            if(k%2 != 0){ // odd
                int mid = (i + (i - (k-1)))/2;
                ans.push_back((double)(nums[mid]));
            }
            else{
                int mid_1 = (i + (i - (k-1)))/2;
                int mid_2 = (mid_1 + 1);
                double val = (double)((nums[mid_1] + nums[mid_2])/2);
                ans.push_back(val);
            }
        }

        return ans;
    }
};