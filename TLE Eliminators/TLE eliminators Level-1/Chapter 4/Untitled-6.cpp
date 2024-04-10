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
        int n; cin>>n;
        int a = 0, b = 0;
        bool ans = false;

        while(n>1){
            if(n%6 == 0){
                n /= 6;
                a = 0;
                b++;
            }
            else if((n%6 != 0) && (a == 1)){
                a++;
                n *= 2;
                b++;
            }
            else{
                ans = true;
                break;
            }
        }
        if(ans == true){
            cout<<-1<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
}