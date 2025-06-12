#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s; cin>>s;
    int res=-1;
    for(int i=0; i<s.size(); i++){
        res=s[i]-'0';
        for(int j=i+1; j<s.size(); j++){
            res=res*10+s[j]-'0';
                if(res%8)continue;
                cout<<"YES"<<endl;
                cout<<res<<endl;
            }
            cout<<"NO"<<endl;
        }

    }
