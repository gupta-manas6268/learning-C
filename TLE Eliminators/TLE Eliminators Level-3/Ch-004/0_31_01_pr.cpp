// Wrong.

// F. Money Trees
// https://codeforces.com/problemset/problem/1873/F




































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
        int ans = 0;
        int curr_fruits = 0;
        for(int left = 0, right = 0; right < n; right++){
            if(right == 0){
                curr_fruits += fruits[right];
                if(curr_fruits > k){
                    curr_fruits -= fruits[left];
                    left++;
                }
                else{
                    ans = max(ans, right-left+1);
                }
            }
            else{
                if((height[right-1] % height[right]) == 0){
                    curr_fruits += fruits[right];

                    if(curr_fruits > k){
                        ans = max(ans, right-left);

                        curr_fruits -= fruits[left];
                        left++;
                    }
                    else{
                        ans = max(ans, right-left+1);
                    }
                }
                else{
                    ans = max(ans, right-left);
                    left = right;
                    curr_fruits = fruits[right];
                }
            }
        }

        cout << ans << endl;
    }
}