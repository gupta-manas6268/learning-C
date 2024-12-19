// Correct.
// This is Mentor's code.

// C. Adding Powers
// https://codeforces.com/problemset/problem/1312/C







































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
        int n, k; cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }        

        int x = *max_element(arr, arr+n);
        int max_power_k = 1;
        while(max_power_k < x){  // finding the max. value we would have added.
            max_power_k *= k;
        }

        bool ans = true;
        while(max_power_k > 0){
            int count = 0;
            for(int i=0; i<n; i++){
                if(arr[i] >= max_power_k){
                    arr[i] -= max_power_k;
                    count++;
                }
            }
            if(count > 1){
                ans = false; break;
            }
            max_power_k /= k;
        }

        if(ans == true){
            int y = *max_element(arr, arr+n);
            if(y == 0){  // Checking if all values have become 0
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
}