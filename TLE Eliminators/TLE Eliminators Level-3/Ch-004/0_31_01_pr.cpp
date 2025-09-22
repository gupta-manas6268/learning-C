// Correct.
// (This is My 2nd-time code.)

// F. Money Trees
// https://codeforces.com/problemset/problem/1873/F




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int Max_Subarray(vector<int>& vec, int k){
    // Max. Length subarray with sum-k, of +ve values.
    int n = vec.size();
    int ans = 0, sum = 0;
    int i=0, j=0;
    while((i <= j) && (j < n)){
        sum += vec[j];
        while((i <= j) && (sum > k)){
            sum -= vec[i];
            i++;
        }
        if(sum <= k){
            ans = max(ans, j-i+1);
        }
        j++;
    }

    return ans;
}

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
        vector<int> a(n), h(n);
        for(int i=0; i < n; i++){ cin >> a[i];}
        for(int i=0; i < n; i++){ cin >> h[i];}

        // Solution
        int Max_Length = 0;
        int i=0, j=0;
        while((i <= j) && (j < n)){
            if( (((j+1) < n) && ((h[j] % h[j+1]) != 0)) || (j == (n-1)) ){
                vector<int> temp;
                for(int x=i; x <= j; x++){
                    temp.push_back(a[x]);
                }
                int Temp_Length = Max_Subarray(temp, k);
                Max_Length = max(Max_Length, Temp_Length);
                i = j+1;
            }
            j++;
        }

        // O/P
        cout << Max_Length << endl;
    }
}