// Correct.

// C. Target Practice
// https://codeforces.com/problemset/problem/1873/C


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string s[10];
        for(int i=0; i<10; i++){ cin >> s[i];}

        int ans = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(s[i][j] == 'X'){
                    if((i == 0) || (j == 0) || (i == 9) || (j == 9)){
                        ans += 1;
                    }
                    else if((i == 1) || (j == 1) || (i == 8) || (j == 8)){
                        ans += 2;
                    }
                    else if((i == 2) || (j == 2) || (i == 7) || (j == 7)){
                        ans += 3;
                    }
                    else if((i == 3) || (j == 3) || (i == 6) || (j == 6)){
                        ans += 4;
                    }
                    else{
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}