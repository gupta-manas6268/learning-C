// Q.2: https://codeforces.com/problemset/problem/1859/A

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
        vector<int> a;
        int element;

        int maximum = 0;
        int times = 0;

        for(int i=0; i<n; i++){
            cin>>element;
            a.push_back(element);

            maximum = max(maximum, a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i] == maximum){
                times++;
                a.erase (a.begin()+i, a.begin()+i+1);
            }
        }
        if(times == n){
            cout<<"-1"<<endl;t
        }
        else{
            cout<< n - times << " " << times<< endl;
            for(int i=0; i < n - times; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int j=0; j < times; j++){
                cout<< maximum << " ";
            }
            cout<<endl;
        }
    }
}