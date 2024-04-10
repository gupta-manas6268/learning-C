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
        int n; cin >> n;
        int arr[n];

        vector<int> vecEven;
        vector<int> vecOdd;

        int even = 0, odd = 0;

        for(int i=0; i < n; i++){
            cin >> arr[i];

            if(arr[i] % 2 == 0){ 
                vecEven.push_back(arr[i]);
                even++;
            }
            else{ 
                vecOdd.push_back(arr[i]);
                odd++;
            }
        }

        vector<int> Ans;

        for(int i=0; i < even; i++){
            Ans.push_back(vecEven[i]);
        }
    }
}