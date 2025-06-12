// Correct.
// I solved this Problem with the help of Hints.
//  (Hints are given below.)

// F. Money Trees
// https://codeforces.com/problemset/problem/1873/F
































// Hint 1:
// What happens when h[i]h[i] % h[i+1]h[i+1] !=0!=0? Can these problems be solved independently?
// Hint 2:
// The question reduces to find the max subarray length with sum≤ksum≤k in O(n).














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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, k; cin >> n >> k;
        vector<int> fruits, height;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            fruits.push_back(temp);
        }
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            height.push_back(temp);
        }

        // O/P
        vector<vector<int>> vec;
        vector<int> temp;
        for(int i=0; i<n; i++){
            if(i == 0){
                temp.push_back(fruits[i]);
            }
            else if(((height[i-1] % height[i]) == 0)){
                temp.push_back(fruits[i]);
            }
            else if(((height[i-1] % height[i]) != 0)){
                vec.push_back(temp);
                temp.clear();
                temp.push_back(fruits[i]);
            }

            if(i == (n-1)){
                vec.push_back(temp);
            }
        }

        int ans = 0;
        for(int i=0; i < vec.size(); i++){
            int curr_Sum = 0;
            for(int left = 0, right = 0; right < vec[i].size(); right++){
                curr_Sum += vec[i][right];
                if(curr_Sum <= k){
                    ans = max(ans, right-left+1);
                }
                else{
                    curr_Sum -= vec[i][left];
                    ans = max(ans, right-left);
                    left++;
                }
            }
        }
        cout << ans << endl;
    }
}