// For normal problems use '\n' because it takes lesser time.
//  But for Interactive Problems use 'endl' because it flushes
//  the OUTPUT.




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int x = 10;
    cout << x << endl;  // This 'endl' automatically' flushes the O/P i.e. 'x'.
                        // i.e. 'endl' flushes 'x' here.

    fflush(stdout);  // These two lines 
    cout << flush;   // flushes the O/P.
}