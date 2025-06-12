// Correct.

// B. Swap and Delete
// https://codeforces.com/problemset/problem/1913/B
































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
        string s; cin >> s;

        int n = s.length();
        int zero = 0, one = 0;
        vector<int> One;
        vector<int> Zero;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){ 
                zero++;
                Zero.push_back(i+1);
            }
            else{ 
                one++;
                One.push_back(i+1);
            }
        }

        int ans = 0;
        if(zero != one){
            if(zero < one){
                if(zero == 0){ ans += n;}
                else{
                    int size = (One[zero] - 1);
                    
                    ans += (n - size);
                }
            }
            else{
                if(one == 0){ ans += n;}
                else{
                    int size = (Zero[one] - 1);
                    ans += (n - size);
                }
            }
        }

        cout << ans << endl;
    }
}