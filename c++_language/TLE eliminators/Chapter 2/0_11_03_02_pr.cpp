#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    vector<int> a(n);

    for(auto &i:a) cin >> i;

    int even=0, odd=0, positive=0, negative=0;

    for(auto &i:a){
        if(i%2 == 0){
            even++;
        }
        else{
            odd++;
        }
        if(i>0){
            positive++;
        }
        else if(i<0){
            negative++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

}