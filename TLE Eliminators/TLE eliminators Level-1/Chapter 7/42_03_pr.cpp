// Correct.
// https://codeforces.com/problemset/problem/1675/B


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        vector<int> arr(n);
        for(int i=0; i<n; i++){ cin >> arr[i];}
        int count = 0;
        for(int i = n-2; i >= 0; i--){
            while(arr[i] >= arr[i+1]){
                arr[i] /= 2;   count++;

                if(arr[i] == arr[i+1] && (arr[i] == 0)){
                    count = -1;
                    goto label;
                }
            }
        }
        label:
        ;

        cout << count << endl;
    }
}