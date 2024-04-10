#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    vector<int> vec1;

    int element;
    for(int i=0; i<n-1; i++){
        cin>>element;
        vec1.push_back(element);
    }
    sort(vec1.begin(), vec1.end());

    for(int i=0; i<n-1; i++){
        if(vec1[i] != i + 1){
            cout<<i+1<<endl;
            break;
        }
        else if((i == n-2) && (vec1[i] == i + 1)){
            cout<<n<<endl;
        }
    }
}