#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Big(O) notation Quiz Questions.

    // 1. (N + M)/K
    // 2. N(N + 1)/2
    // 3. N^2 + M(N^2) + M^2(N) + N*M
    // 4. (N^3)/64 + 20*N + (32 * N * M)^2

    // Ans 1. (N + M)/K       // Because 'K' is not a constant so we cannot ignore it.
    // Ans 2. N^2
    // Ans 3. M(N^2) + M^2(N)  // Because 'M(N^2) increases faster than (N^2), also '(M^2)N' grows faster than 'NM'.(As N,M >=1) 
    // Ans 4. (N^3) + ((N^2) * (M^2))  // Because, we can't compare that which grows faster (N^3) or ((N^2) * (M^2)). (So, including all highest degree terms of all variable is 'Ans'.
                                       //  Ex-→ here, (N^3) is highest degree term of 'N' and ((N^2) * (M^2)) is highest degree term of 'M'.)
}