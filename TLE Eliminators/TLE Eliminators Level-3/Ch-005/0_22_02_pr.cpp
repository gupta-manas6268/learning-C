// Correct.
// This is Mentor's code.
//  (Hint: See Page-7 of Register Notes- Advanced No. Theory.)

// Common Divisors
// https://cses.fi/problemset/task/1081


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int val = 1e6;
int frequency[val+1] = {0};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    int Maxi = 0;
    for(int i=0; i<n; i++){ 
        int x; cin >> x;
        Maxi = max(Maxi, x);    
        frequency[x]++;
    }

    // O/P

    // Largest GCD => Largest no. s.t. there are >= 2,
    //                 multiples of that no. exists 
    //                 in the array.
    for(int i = Maxi; i >= 1; i--){
        int count = 0;
        for(int j = i; j <= Maxi; j += i){
            count += frequency[j];
        }
        if(count > 1){
            cout << i << endl;
            break;
        }
    }
}