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
        vector<int> vec1;
        int element;

        for(int i=0; i<n; i++){
            cin>>element;
            vec1.push_back(element);
        }

        int a[n];
        for(int i=0; i<n; i++){
            a[i] = 0;

            if(vec1[i] == vec1[i + 1]){
                
            }
        }
    }
}