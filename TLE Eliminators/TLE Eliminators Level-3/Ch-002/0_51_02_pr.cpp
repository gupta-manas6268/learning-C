// Correct.
// This is Mentor's code.

// C1. Guessing the Greatest (easy version)
// https://codeforces.com/problemset/problem/1486/C1



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ask(int x, int y){
    if(x >= y){
        return -1;
    }

    cout << "? " << (x + 1) << " " << (y + 1) << endl;
    // Above 'x+1', 'y+1' because x & y are in 0-index
    //  So, we convert them in 1-index for Interactor.
    int z; cin >> z;

    return z-1;
}

signed main(){
    // I/P
    int n; cin >> n;

    // Interactive
    int left = 0, right = n; // 0-indexed.

    while(left < (right - 1)){  
        // Range => [Left, Right), i.e. Left is Inclusive,
        //                          but Right is Exclusive in range.
        int mid = (left + right)/ 2;
        int second_Max = ask(left, right-1);

        if(second_Max < mid){
            if(ask(left, mid - 1) == second_Max){
                right = mid;
            }
            else{
                left = mid;
            }
        }
        else{
            if(ask(mid, right-1) == second_Max){
                left = mid;
            }
            else{
                right = mid;
            }
        }
    }

    // O/P
    cout << "! " << (left + 1) << endl;
}