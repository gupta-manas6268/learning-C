// Correct.

// E. Interview
// https://codeforces.com/problemset/problem/1807/E




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    int tc; cin >> tc;

    while (tc--){
        // General I/P
        int n; cin >> n;
        vector<int> a;
        vector<int> prefix_Sum;
        prefix_Sum.push_back(0);
        int Prefix_Sum = 0;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);

            Prefix_Sum += temp;
            prefix_Sum.push_back(Prefix_Sum);
        }

        // O/P
        int left = 1, right = n;
        while(left <= right){
            int mid = (left + right)/ 2;

            cout << "? ";
            int size = (mid - left + 1);
            cout << size << " ";
            for(int i = left; i <= mid; i++){
                cout << i << " ";
            }
            cout << endl;

            // Ask Response by I/P.
            int response; cin >> response;
            if((prefix_Sum[mid] - prefix_Sum[left-1]) == response){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        
        cout << "! " << left << endl;
    }
}