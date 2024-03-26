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

    long long a = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if((i>0) && (arr[i] < arr[i-1])){
            a += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
            // arr[i] += arr[i-1] - arr[i];
        }
    }
    cout<<(long long)a<<endl;
}