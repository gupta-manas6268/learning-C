// Correct.

// Q.: Given an array of positive integers find the length
//      of longest subarray with sum <= K



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int length_of_subarray(vector<int> a, int k){
    int n = a.size();

    int ans = 0;
    int i = 0, j = 0;
    // i -> left pointer, j -> right pointer.

    int sum = 0;
    while(j < n){
        sum += a[j];

        while((i <= j) && (sum > k)){
            sum -= a[i];
            i++;  // move left pointer 1 step right.
        }

        int length = (j - i + 1); // It is length of subarray.
        if(sum <= k){
            ans = max(ans, (j - i + 1));
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

    length_of_subarray(a, k);
    // TC = O(n).
}