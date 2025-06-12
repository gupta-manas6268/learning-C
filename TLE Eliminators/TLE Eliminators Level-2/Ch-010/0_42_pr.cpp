// This is Mentor's code.
// Correct.

// AGGRCOW - Aggressive cows
// https://www.spoj.com/problems/AGGRCOW/


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int check(long long mid, vector<long long> &x, long long c){
    long long count = 1, previous = x[0];

    for(int i=1; i < x.size(); i++){
        if((x[i] - previous) >= mid){
            count++;
            previous = x[i];
        }
    }
    if(count >= c){
        return 1;
    }
    return 0;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n, c; cin >> n >> c;
        vector<long long> x;
        for(long long i=0; i<n; i++){
            long long temp; cin >> temp;
            x.push_back(temp);
        }

        sort(x.begin(), x.end());

        // Solve by Binary Search of Search-Space. 
        long long lower = 0, high = 1e18;
        while((lower + 1) < high){
            long long mid = lower + ((high - lower) / 2);

            if(check(mid, x, c)){
                lower = mid;
            }
            else{
                high = mid;
            }
        }

        cout << lower << endl;


        // TC = O(log(x[i]) * n).
        //  TC = O(log(10 ^ 9) * (10 ^ 5))).
        //     = O(3 * (10 ^ 6)).
        //     [where, 10 ^ 9 => pow(10, 9)].
    }
}