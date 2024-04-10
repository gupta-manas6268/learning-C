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
        for(int i=0; i<n; i++)  // O(n)
            cin>>arr[i];

        int idxOfFirstNo = 0, idxOfSecondNo = -1; // idxOfFirstNo -→ index of First No.
        int countFirstNo = 1, countSecondNo = 0;  // countFirstNo -→ count of First No.

        for(int i=1; i<n; i++){  // O(n)
            if(arr[i] == arr[idxOfFirstNo])
                countFirstNo++;
            else{
                idxOfSecondNo = i;
                countSecondNo++;
            }
        }
        if(countFirstNo == 1)
            cout << idxOfFirstNo + 1 <<endl;
        else
            cout << idxOfSecondNo + 1 <<endl;   
    }
    // TC = O(n).
}