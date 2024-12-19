// 

// G. Orray
// https://codeforces.com/problemset/problem/1742/G



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());

        vector<int> Final_A;
        Final_A.push_back(a[n-1]);
        int max = a[n-1];
        int Log = (log2(max) + 1);

        vector<int> OR;
        // Decimal to Binary.
        vector<vector<int>> Places;
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=0; j<Log; j++){
                if(((a[i] >> j) & 1) == 1){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(0);
                }
            }
            reverse(temp.begin(), temp.end());
            if(i == (n-1)){
                OR = temp;
            }
            if(i != (n-1)){
                Places.push_back(temp);
            }
        }

        for(int i=1; i<n; i++){
            vector<int> OR_0;
            for(int i=0; i<Log; i++){
                if(OR[i] == 0){
                    OR_0.push_back(i);
                }
            }

            int Size = Places.size();
            for(int i=(Size-1); i>=0; i--){
                for(auto val:OR_0){
                    if()
                }
            }
        }
    }
}