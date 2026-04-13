// Correct.
// (This is Mentor's code.)

// C. Minimize The Integer
// https://codeforces.com/problemset/problem/1251/C



































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
        // I/P
        string s; cin >> s;

        // Solution
        string even = "", odd = "";
        string ans = "";
        for(auto Char : s){
            if((Char % 2) == 1){ odd += Char;}
            else{ even += Char;}
        }

        int Pointer_1 = 0, Pointer_2 = 0;
        while((Pointer_1 < even.size()) && (Pointer_2 < odd.size())){
            if((even[Pointer_1]-'0') < (odd[Pointer_2]-'0')){
                ans += even[Pointer_1];
                Pointer_1++;
            }
            else{
                ans += odd[Pointer_2];
                Pointer_2++;
            }
        }
        while(Pointer_1 < even.size()){
            ans += even[Pointer_1];
            Pointer_1++;
        }
        while(Pointer_2 < odd.size()){
            ans += odd[Pointer_2];
            Pointer_2++;
        }

        // O/P
        cout << ans << endl;
    }
}