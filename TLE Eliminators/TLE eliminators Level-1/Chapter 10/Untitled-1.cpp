#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Function(int n){
    vector<int> vec;
    for(int i=0; i<n; i++){
        if(i == 0){
            vec.push_back(1);
        }
        else if(i == 1){
            vec.push_back(2);
        }
        else{
            for(int j = vec[i-1]+1; ; j++){
                if(((3*j) % (vec[i-1]+vec[i-2])) != 0){
                    vec.push_back(j);
                    break;
                }
                // Debug print to see what j is being checked
                cout << "Checking j: " << j << " for i: " << i << endl;
            }
        }
    }

    return vec;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> ans = Function(n);

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
