// 

// B. Reverse Binary Strings
// https://codeforces.com/contest/1437/problem/B



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
        int n; cin >>n;
        string s; cin >> s;
        string s1, s2;
        int ans_1 = 0, ans_2 = 0;
        for(int i=0; i<n; i++){
            if(i == 0){
                s1[0] = '0';
                s2[0] = '1';
            }
            else if(s1[i-1] == '0'){
                s1[i] = '1';
                s2[i] = '0';
            }
            else{
                s1[i] = '0';
                s2[i] = '1';
            }
        }
        s1[n] = '\0';
        s2[n] = '\0';

        for(int i=0; i<n; i++){
            if(s[i] != s1[i]){
                if(s[i+1] != s1[i+1]){
                    ans_1--;
                }
                ans_1++;
            }
        }

        for(int i=0; i<n; i++){
            if(s[i] != s2[i]){
                if(s[i+1] != s2[i+1]){
                    ans_2--;
                }
                ans_2++;
            }
        }

        int ans = min(ans_1, ans_2);
        cout << ans << endl;
    }
}