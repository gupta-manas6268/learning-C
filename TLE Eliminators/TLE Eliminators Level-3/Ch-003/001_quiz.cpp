// Correct.

// Q.: Max. subarray sum of all subarrays with size k.





































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int max_Subarray_Sum_Of_Size_K(vector<int> &a, int k){
    int n = a.size();

    int sum = 0;
    // Add the first k element to the window.
    for(int i=0; i < k; i++){
        sum += a[i];
    }

    int ans = sum;

    // Slide the window.
    for(int i = k; i < n; i++){
        sum += a[i];
        sum -= a[i-k];

        ans = max(ans, sum);
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}