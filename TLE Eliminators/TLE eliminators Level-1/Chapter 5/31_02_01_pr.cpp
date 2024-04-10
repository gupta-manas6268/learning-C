#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    int arr[n];
    int ans;

    for(int i=1; i<=n; i++){
        arr[i-1] = 1;
        while (i>0){
            arr[i-1] *= (i%10);
            i /= 10;
        }
        if((i>1) && (arr[i-1] >= arr[i-2])){
            ans = arr[i-1];
        }     
    }
    cout<<ans<<endl;
}