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

        for(int i = n; i; i++){
            int a = 0, b = 0;

            while(n>0){
                a += n % 10;
                n /= 10;

                b++;
            }

            if(a == n){
                int arr[b];
                for(int i=1; i<b; i++){
                    if(arr[i] == arr[i-1]){
                        
                    }
                }
            }
        }
    }
}