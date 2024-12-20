// Wrong.

// Multiplication Table
// https://cses.fi/problemset/task/2422





































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

    int n; cin >> n;
    
    vector<vector<int>> a;
    for(int i=1; i<=n; i++){
        vector<int> temp_Vec;
        for(int j=1; j<=n; j++){
            int temp = (i * j);
            temp_Vec.push_back(temp);
        }
    }

    int left = 0, right = (n*n);
    int ans;
    while(left <= right){
        int mid = (left + right)/2;

        int No_of_Values = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] <= mid){
                    No_of_Values++;
                }
                else{ break;}
            }
        }

        if(No_of_Values >= ((n*n)-1)/2){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    cout << ans << endl;
}