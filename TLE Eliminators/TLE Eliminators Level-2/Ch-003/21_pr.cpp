// Correct.

// A. You Are Given Two Binary Strings...
// https://codeforces.com/problemset/problem/1202/A





































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
        string x, y; cin >> x >> y;
        int n = x.length();
        reverse(x.begin(), x.end());
        int m = y.length();
        reverse(y.begin(), y.end());

        int k;
        vector<int> A, B;
        for(int i=0; i<n; i++){
            if(x[i] == '1'){
                A.push_back(i);
            }
        }
        for(int i=0; i<m; i++){
            if(y[i] == '1'){
                B.push_back(i);
            }
        }

        int len_1 = A.size();
        int len_2 = B.size();

        if(A[0] == B[0]){ k=0;}
        else if(A[0] > B[0]){
            k = (A[0]-B[0]);
        }
        else{
            for(int i=0; i<len_1; i++){
                if(A[i] >= B[0]){
                    k = (A[i] - B[0]); break;
                }
            }
        }

        cout << k << endl;
    }
}