// From Slide-1, Page-24.


























// Correct.

// Q.3: Given an array of positive integers find the length
//       of smallest subarray with sum of elements >= K.

//      (Hint: This problem is of Decreasing Technique.)


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int shortest_subarray(vector<int> a, int k){
    int n = a.size();

    int ans = INF;
    int sum = 0;
    int i = 0, j = 0;
    while(j < n){
        sum += a[j];
        while((i <= j) && (sum >= k)){
            int length = (j - i + 1);
            ans = min(ans, length);

            // move left pointer 1-step right.
            sum -= a[i];
            i++;
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

    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    shortest_subarray(a, k);
    // TC = O(n).
}