// This is Mentor's code.
// Correct.

// INVCNT - Inversion Count
// https://www.spoj.com/problems/INVCNT/






// Hint: Solve by problem by Merge-Sort.























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

long long merge(int left, int mid, int right, vector<int> &v){
    int p1 = left;
    int p2 = mid + 1;
    long long inversion_Count = 0;

    vector<int> result;
    while((p1 <= mid) && (p2 <= right)){
        if(v[p1] <= v[p2]){
            result.push_back(v[p1++]);
        }
        else{
            result.push_back(v[p2++]);
            inversion_Count += (mid - p1 + 1);
        }
    }

    while(p1 <= mid){ result.push_back(v[p1++]);}
    while(p2 <= right){ result.push_back(v[p2++]);}

    for(int i = left; i <= right; i++){
        v[i] = result[i-left];
    }

    return inversion_Count;
}

long long merge_Sort(int left, int right, vector<int> &v){
    long long inversion_Count = 0;
    // Stop when (left >Countght)
    if(left < right){
        int mid = left + (right - left)/2;

        inversion_Count += merge_Sort(left, mid, v);
        inversion_Count += merge_Sort(mid + 1, right, v);
        inversion_Count += merge(left, mid, right, v);
    }

    return inversion_Count;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){ cin >> v[i];}

        long long ans = merge_Sort(0, n-1, v);
        cout << ans << endl;
    }
}