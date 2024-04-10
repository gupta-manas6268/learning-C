#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int arr[5];

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int x = max(arr[0], max(arr[1], max(arr[2], max(arr[3], arr[4])))), y = min(arr[0], min(arr[1], min(arr[2], min(arr[3], arr[4]))));

    int p=0, q=0;

    for(int i=0; i<5; i++){
        if(arr[i] == x){
            p++;
        }
        else if(arr[i] == y){
            q++;
        }
        if((i==4) && (p==3 && q==2) || (p==2 && q==3)){
        cout<<"Yes"<<endl;
        }
        else if((i==4)){
            cout<<"No"<<endl;
        }
    }

    

}