#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    vector<int> vec;
    int digit = 0;

    for(int i=n; i>0; i /= 10){
        vec.push_back(i);
        digit++;
    }

    for(int j=0; j<digit; j++){
        if(vec[j] % 2 != 0){
            vec.erase(vec.begin() + j);
        }
        if(vec[j] % 2 == 0){
            
        }
    }
}