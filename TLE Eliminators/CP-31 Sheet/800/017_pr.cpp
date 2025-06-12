// Correct.

// A. Forbidden Integer
// https://codeforces.com/problemset/problem/1845/A
































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

    int tc; cin >> tc;

    while (tc--){
        int n, k, x; cin >> n >> k >> x;
        if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i=0; i<n; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            if(k == 1){ cout << "NO" << endl;}
            else if(k == 2){
                if(n%2 != 0){ cout << "NO" << endl;}
                else{
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for(int i=1; i <= (n/2); i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
            }
            else{
                if(n%2 == 0){
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for(int i=1; i <= (n/2); i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else{
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for(int i=1; i <= (n/2); i++){
                        if(i == (n/2)){
                            cout << 3 << " ";
                        }
                        else{ cout << 2 << " ";}
                    }
                    cout << endl;
                }
            }
        }
    }
}