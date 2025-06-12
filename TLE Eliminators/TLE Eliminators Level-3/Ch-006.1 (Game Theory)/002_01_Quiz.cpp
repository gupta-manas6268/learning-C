// Wrong. 

// D. World is Mine
// https://codeforces.com/problemset/problem/1987/D




































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
        // I/P
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}

        // Solution
        sort(a.begin(), a.end());

        vector<int> freq;
        int val = 0;
        for(int i=0; i<n; i++){
            val++;
            if((a[i] != a[i+1]) || (i == (n-1))){
                freq.push_back(val);
                val = 0;
            }
        }

        int cancel = 0;
        int initial_Index = 0;
        for(int i=0; i < freq.size(); i++){
            int temp;
            if(initial_Index == 0){
                temp = (freq[i] - i);
                if(temp <= 0){
                    initial_Index = (i+temp);
                    cancel++;
                }
            }
            else{
                temp = (freq[i] - (i-initial_Index) + cancel);
            }
        }
        
        // O/P
        int ans = (freq.size() - cancel);
        cout << ans << endl;
    }
}