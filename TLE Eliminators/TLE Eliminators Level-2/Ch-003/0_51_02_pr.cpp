// Correct.
// This is Mentor's code.

// G. Even-Odd XOR
// https://codeforces.com/problemset/problem/1722/G




































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
        int n; cin >> n;
        
        if(n == 3){
            cout << "1 2 3" << endl;
        }
        else{
            stack<int> even, odd;
            int a = 2;
            for(int i=0; i < (n/2); i++){ // By default, for 'n/2' => even.
                even.push(a);
                odd.push(a+1);
                a += 2;
            }
            if((n/2)%2 != 0){ // 'n/2' => odd.
                int p = odd.top();
                p ^= 1;
                odd.pop();

                int q = 1LL << 20;
                p ^= q;
                odd.top() ^= q;
                odd.push(p);
            }
            for(int i=1; i <= n; i++){
                if((n%2 != 0) && (i == n)){  // n => odd
                    cout << 0 << " ";
                }
                else if(i%2 != 0){
                    cout << odd.top() << " ";
                    odd.pop();
                }
                else{
                    cout << even.top() << " ";
                    even.pop();
                }
            }
            cout << endl;
        }
    }
}