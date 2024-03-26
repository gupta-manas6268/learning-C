#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    char *st; cin>>st;
    char *ptr = st;
    int a=0, b=0, c=0, d=0;

    while(*ptr != '\0'){
        if(*ptr == 'A'){
            a++;
        }
        else if(*ptr == 'C'){
            b++;
        }
        else if(*ptr == 'G'){
            c++;
        }
        else{
            d++;
        }
    }
    int ans = max(d, max(c, max(a, b)));
    cout<<ans<<endl;t
}