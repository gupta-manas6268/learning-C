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
        int arr[n];
        int a = 0, b = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i]%2==0){
                a++;
            }
            else{
                b++;
            }
        }
        if(n%2 == 0){
            if(n/2 - a > 0){
                cout<< n/2 - a <<endl;
            }
            else{
                cout<< a - n/2 <<endl;
            }
        }
        else{
            cout<< -1 << endl;
        }
    }
}