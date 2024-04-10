#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void divisor(int i, int d){
    
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int d; cin>>d;

        for(int i=6; ; i++){
            int ans = 0;
            int arr[i];

            for(int j=1; j<=i; j++){
                if(i%j == 0){
                    arr[ans-1] = j;
                    ans++;
                }
            }
            if(ans>=4){
                bool factor = true;
                for(int k=0; k<(ans-1); k++){
                    if(arr[k+1] - arr[k] < d){
                        factor = false;
                        break;
                    }
                }
                if(factor == true){
                cout<<i<<endl;
                break;
            }
            }
            
        }
    }
}