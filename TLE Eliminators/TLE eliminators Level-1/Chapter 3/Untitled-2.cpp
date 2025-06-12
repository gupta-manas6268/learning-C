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

        int maximum = 0;
        int minimum = 1000;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            maximum = max(maximum, arr[i]);
            minimum = min(minimum, arr[i]);
        }
        int a = 0, b = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == maximum){
                a++;
            }
            else{
                b++;
            }
        }
        
    }
}