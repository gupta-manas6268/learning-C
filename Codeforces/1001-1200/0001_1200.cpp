// From this Question.

// D. Rudolf and the Ball Game
// https://codeforces.com/problemset/problem/1941/D


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n, m, k; cin >> n >> m >> k;
        int r[m];
        char c[m];
        for(int i=0; i<m; i++){ 
            cin >> r[i] >> c[i];
        }

        int position[i];
        for(int i=0; i<m; i++){
            if(c[i] == '0'){
                if(i == 0){
                    position[i] = k + r[i];

                    if(position[i] > n){
                        position[i] %= n;
                    }
                }
                else{
                    position[i] = position[i-1] + r[i];
                }
            }
            else if(c[i] == '1'){
                if(i == 0){
                    position[i] = (k - r[i]);

                    if(position[i] < 0){
                        position[i] += n;
                    }
                }
                else{
                    position[i] = (position[i-1] - r[i]);
                }
            }
            else{

            }
        }
    }
}