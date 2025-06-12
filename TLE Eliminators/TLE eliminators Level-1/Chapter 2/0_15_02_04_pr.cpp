#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> count(14, 0);

    for(int i=0; i<5; i++){
        int val; cin>>val;
        count[val]++;
    }

    for(int i=0; i<14; i++){  // Here, as '1 <= A,B,C,D,E <= 13'
        for(int j=0; j<14; j++){  // Here, as '1 <= A,B,C,D,E <= 13'
            if(count[i]==3 && count[j]==2){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}