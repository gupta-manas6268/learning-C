// Correct.
// This is My code, but I write it with the 
//  help of Mentor.

// D. Fixed Point Guessing
// https://codeforces.com/problemset/problem/1698/D


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;

        // Interactive
        
        // count = total elements in range [L,R],
        //          whose value [L,R].

        // if(count => odd){
        //      fixed point lies in this range.
        // }
        // else{
        //      it lies outside this range.
        // }

        int left = 1, right = n;
        int ans;
        while(left <= right){
            int mid = (left + right)/ 2;

            cout << "? " << left << " " << mid << endl;
            int size = (mid - left + 1);
            vector<int> input(size);
            for(int i=0; i<size; i++){
                cin >> input[i];
            }

            int count = 0;
            for(int i=0; i<size; i++){
                if((input[i] >= left) && (input[i] <= mid)){
                    count++;
                }
            }

            if(count%2 != 0){ // odd
                right = mid-1;
                ans = mid;
            }
            else{ // even
                left = mid+1;
            }
        }

        cout << "! " << ans << endl;
    }
}