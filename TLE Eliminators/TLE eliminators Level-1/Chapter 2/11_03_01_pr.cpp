#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    int arr[tc-1];

    int a=0, b=0, c=0, d=0;

    for(int i=0; i<tc; i++){
        cin>>arr[i];

        if(arr[i]%2==0){
            a++;
        }
        if(arr[i]%2!=0){
            b++;
        }
        if(arr[i]>0){
            c++;
        }
        if(arr[i]<0){
            d++;
        }
    }
    cout<<"Even: "<<a<<endl;
    cout<<"Odd: "<<b<<endl;
    cout<<"Positive: "<<c<<endl;
    cout<<"Negative: "<<d<<endl;
    
}