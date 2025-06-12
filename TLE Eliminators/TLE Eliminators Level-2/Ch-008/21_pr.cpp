// Correct.

// B. Sort the Subarray
// https://codeforces.com/contest/1821/problem/B



















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
        int a[n], b[n];
        for(int i=0; i<n; i++){ cin >> a[i];}
        for(int i=0; i<n; i++){ cin >> b[i];}

        int left = 0, right = 0;
        for(int i=0; i<n; i++){
            if(((a[i] != b[i])) && (left == 0)){
                left = (i + 1);
            }
            else if((left != 0) && ((b[i] > b[i+1]) || (i+1 == n))){
                right = (i + 1);
                break;
            }
        }

        for(int i=left-1; i; i--){
            if(b[i-1] <= b[i]){
                left = i;
            }
            else{
                break;
            }
        }

        cout << left << " " << right << endl;
    }
}