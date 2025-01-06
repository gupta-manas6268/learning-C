// Correct.

// Q.2: Given an array find the length of longest
//       subarray with not more than K distinct elements




































// Here, arr[L] => arr[Left], arr[R] => arr[Right].
// (In Teacher's ppt-notes page-17)


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int longest_subarray(vector<int> a, int k){
    int n = a.size();

    int ans = 0;
    int i = 0, j = 0;

    map<int, int> freq;
    while(j < n){
        // include the jth element in your segment.
        freq[a[j]]++;
        while((i <= j) && (freq.size() < k)){  // move left pointer 1-step left.
            freq[a[i]]--;
            if(freq[a[i]] == 0){
                freq.erase(a[i]);
            }
            i++;
        }

        int length = (j - i + 1);
        if(freq.size() <= k){
            ans = max(ans, length);
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

    longest_subarray(a, k);
    // TC = O(n * log(k)).

    // log(k), because access time of map is in log().
}