// Correct.
// (This is Mentor's code.)

// (From Slide-06, Page-03.)
// Problem: One Two Game
//  There is a pile containing 'N' stones. There are two players 
//  Alice and Bob. Every player in their turn can pick atmost 
//  'k' coins. The one who picks the last stone is the
//  winner. Who will win the game if Alice starts the game.
//  Example: input: N = 3 , output: Bob






























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Debugging Checklist:
// 1. Edge cases
// 2. Overflow
// 3. Wrong loops
// 4. Something you normally repeat, etc.

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k; cin >> n >> k; // k => Max. coins we can pick at each turn.

    // O/P
    if((n % (k + 1)) == 0){ cout << "2" << " " << "Bob";}
    //                              (↑ 2nd-player wins the game.)
    else{ cout << "1" << " " << "Alice";}
}