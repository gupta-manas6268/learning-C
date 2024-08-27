// 

// This is a HomeWork Question.
// (Hint: See page - 17 and 18 of Sliding Windows ppt slide.)


// Q.: Max. subarray sum of subarrays with distinct 
//      elements of size k.
//      (i.e. for all subarrays of size k, where the 
//            elements are unique, find max. sum.)
//      (if no subarray have unique elements then,
//       ans => 0.)





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

    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }


}