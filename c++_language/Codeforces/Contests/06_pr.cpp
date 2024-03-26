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
        vector<int> h;
        vector<int> a;
        int element1, element2;

        int max1 = 0, max2 = 0;
        int t = 0;

        for(int i=0; i<n; i++){
            cin>>element1;
            h.push_back(element1);
        }
        for(int i=0; i<n; i++){
            cin>>element2;
            a.push_back(element2);
        }

        for(int i=0; i<n; i++){
            max1 = max(max1, h[i]*a[i]);
        }
        for(int i=0; i<n; i++){
            if(h[i]*a[i] == max1){
                a.erase(a.begin()+i, a.begin()+i+1);
                t = i;
            }
        }
        for(int i=0; i<n-1; i++){
            max2 = max(max2, h[i]*a[i]);
        }

        for(int i=0; i<n; i++){
            if(i = t){
                cout<< max1 - max2 <<" ";
            }
            else{
                cout<<"0 ";
            }
        }
    }
}