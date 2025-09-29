// Correct.
// (I solved it in '61_pr.cpp' in 'Ch-004' => TLE-Eliminators Level-03)

// This is Mentor's code.

// Sum of Three Values
// https://cses.fi/problemset/task/1641




































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

    // I/P
    int n, x; cin >> n >> x;
    vector<pair<int,int>> arr;
    for(int i=1; i <= n; i++){
        int a; cin >> a;
        pair<int,int> p;
        p.first = a;
        p.second = i;
        arr.push_back(p);
    }
    sort(arr.begin(), arr.end());

    // O/P
    // We use 2-pointers.
    for(int i=0; i<n; i++){
        int left = 0, right = n-1;
        while(left != right){
            int target = (x - arr[i].first);
            if((left != i) && (right != i) && (arr[left].first + arr[right].first == target)){
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << endl;
                return 0;
            }
            if(arr[left].first + arr[right].first <= target){
                left++;
            }
            else{
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}