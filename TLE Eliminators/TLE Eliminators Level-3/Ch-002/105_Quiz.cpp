// 

// 1. Guess the Number
// https://codeforces.com/gym/101021/problem/1

// Solution on - https://codeforces.com/blog/entry/45307

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // ios::sync_with_stdio(false); cin.tie(NULL);

    int left = 1, right = 1e6;
    while(left < right){
        int mid = (left + right)/2;
        cout << mid << endl;
        fflush(stdout);
        cout << flush;

        string response; cin >> response;
        if(response == ">="){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    cout << "! " << left << endl;
    fflush(stdout);
    cout << flush;
}