#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++) // O(n)
            cin>>arr[i];

        vector<int> freq(101, 0);  // The SC(Space Complexity) of -→ this would depend on constraints of the problem.
        vector<int> lastIdx(101, -1);

        for(int i=0; i<n; i++){  // O(n)
            freq[arr[i]]++;
            lastIdx[arr[i]] = i;
        }
        for(int i=1; i<=100; i++){ // O(100)
            if(freq[i] == 1)
                cout << lastIdx[i] + 1 <<endl;
        }
    }
    // TC = O(n + x) = O(n). // here,"n -→ size of the array" & "x -→ constraints on value of a[i]"
    // above TC = O(n) -→[Because 'x' can be neglected.]
}