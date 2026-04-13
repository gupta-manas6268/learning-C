// 
// (This is Mentor's code. Complete this code.)


// Quiz: You are given an array-A of size-N & an integer-X. 
//       Your task is to count the no. of subarrays (l, r) 
// s.t. GCD of all elements in the subarray is >= X.
//  (n <= 2e5, a[i] <= 1e9)
// 
// Sample Input: A = [1, 2, 3, 6, 9], X = 3
// Sample Output: 6





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Debugging Checklist:
// 1. Edge cases
// 2. Overflow
// 3. Wrong loops
// 4. Something you normally repeat, etc.

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    int count = 0;
    for(int i = 0; i < n; i++){
        int low = i, high = n-1, posi = -1; // posi = position
        while(low <= high){
            int mid = (low + high)/ 2;
            if(query(i, (mid - i + 1)) >= x){
                posi = mid;
                low = (mid + 1);
            }
            else{
                high = (mid - 1);
            }
        }
        if(posi != -1){
            count += (posi - i + 1);
        }
    }
}