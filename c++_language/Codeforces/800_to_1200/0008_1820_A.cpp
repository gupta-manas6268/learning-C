// Q.8: https://codeforces.com/problemset/problem/1820/A















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int strlen(string s){

}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string s; cin>>s;
        int ans = 0;

        for(int i=0; i; i++){
            if(s[i] == '\0'){ break;}
            else{
                if((i == 0) && (s[i] == '_')){ ans++;}

                else if(((s[i] == '_') && (s[i+1] == '^'))){
                    ans++;
                }
                else if((s[i] == '_') && (s[i+1] == '_')){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}