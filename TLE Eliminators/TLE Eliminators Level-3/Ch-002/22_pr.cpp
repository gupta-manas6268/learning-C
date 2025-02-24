// Correct.

// F1. Guess the K-th Zero (Easy version)
// https://codeforces.com/problemset/problem/1520/F1




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // I/P
    int n, t; cin >> n >> t;
    int k; cin >> k;

    // Interactive
    int left = 1, right = n;
    while(left <= right){
        int mid = (left + right)/ 2;

        cout << "? " << left << " " << mid << endl;
        int response; cin >> response;
        int no_of_zero = ((mid - left + 1) - response);

        if(k > no_of_zero){
            k -= no_of_zero;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    // O/P
    cout << "! " << left << endl;
}