// 

// B. Aleksa and Stack
// https://codeforces.com/contest/1878/problem/B


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> function(int n){
    vector<int> vec;
    for(int i=0; i<n; i++){
        if(i == 0){
            vec.push_back(1);
        }
        else if(i == 1){
            vec.push_back(2);
        }
        else{
            for(int j = vec[i-1]+vec[i-2]+1; j; j++){
                if((3*j) % (vec[i-1]+vec[i-2]) != 0){
                    vec.push_back(j);
                    break;
                }
            }
        }
    }

    return vec;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> ans = function(n);

        for(int i=0; i<n; i++){
            ans.push_back(function(n)[i]);
        }
    }
}