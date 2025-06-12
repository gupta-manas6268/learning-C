#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Trial-Division method:

    int n; cin>>n;

    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
    }

    if(n != 1) // n = 1, only when the last prime factor occurred multiple times.
        cout<<n<<" "; // Because, if 'n' becomes '3' then, (sqrt(3) < 2), which is not satisfied for the loop condition.

    cout<<endl;
}