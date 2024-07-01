#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    vector<int> v1, v2;
    // v1 and v2 are sorted Vectors.
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(6);

    v2.push_back(1);
    v2.push_back(4);

    vector<int> v3(5);
    int i=0, j=0, k=0;
    while((i < v1.size()) && (j < v2.size())){
        if(v1[i] <= v2[j]){
            v3[k] = v1[i];
            i++; k++;
        }
        else{
            v3[k] = v2[j];
            j++; k++;
        }
    }
    while(i < v1.size()){
        v3[k] = v1[i];
        i++;
    }
    while(j < v2.size()){
        v3[k] = v2[j];
        j++;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        
    }
}