#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void display(vector<int> &v){
    int maximum = 0;

    for(int i=0; i<v.n(); i++){
        maximum = max(maximum, v[i]);
    }

    int ans = 0;
    for(int i=0; i<v.n(); i++){
        ans += (maximum - v[i]);
    }
    return ans;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> vec1;

    int n; cin>>n;
    int element;

    for(int i=0; i<n; i++){
        cin>>element;
        vec1.push_back(element);
    }
    
    int answer = display(vec1);
    cout<<answer<<endl;
}