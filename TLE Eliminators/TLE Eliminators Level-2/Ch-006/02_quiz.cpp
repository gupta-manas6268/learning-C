// This is my code.(And I already solved this problem myself.)
//  without help of mentor.

// Correct.

// C. Mere Array
// https://codeforces.com/problemset/problem/1401/C



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
        int n; cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++){ 
            int a; cin >> a;
            arr.push_back(a);
        }

        vector<int> arr_1 = arr;
        sort(arr.begin(), arr.end());
        vector<int> arr_2 = arr;
        int mini = arr_2[0];

        vector<int> index;
        bool ans = true;
        for(int i=0; i<n; i++){
            if(arr_1[i] != arr_2[i]){
                if(arr_1[i]%mini != 0){
                    ans = false; break;
                } 
                index.push_back(i);
            }
        }

        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}