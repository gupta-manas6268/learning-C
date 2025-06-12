// There is compilation error in this code in 'codeforces'.

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
        char *st; cin>>st;
        int len = strlen(st);t

        if(len % 2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0; i <= (len/2) - 1; i++){
                if(st[i] != st[i + (len/2)]){
                    cout<<"NO"<<endl;
                    break;
                }
                else if((i == (len/2)-1) && (st[i] == st[i + (len/2)])){
                    cout<<"YES"<<endl;
                }
            }
        }
    }
}