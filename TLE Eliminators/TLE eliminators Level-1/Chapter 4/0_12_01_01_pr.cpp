#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // This code will not work due to 'Time limit Exceeded'. 
    int tc; cin >> tc;

    while (tc--){
        int x; cin>>x;
        int a = 0;

        for(int i=1; i<=x; i++){
            if(x%i == 0){
                a++;
            }
        }
        cout<<a<<endl;
    }
}