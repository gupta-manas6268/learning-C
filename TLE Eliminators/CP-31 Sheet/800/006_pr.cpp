// Correct.

// A. Doremy's Paint 3
// https://codeforces.com/problemset/problem/1890/A




























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
            int temp; cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end());
        int frequency_1 = count(a.begin(), a.end(), a[0]);
        int frequency_2 = count(a.begin(), a.end(), a[n-1]);

        bool ans = true;
        if(a[0] == a[n-1]){
            ans = true;
        }
        else if((frequency_1 + frequency_2) != n){
            ans = false;
        }
        else{
            if(n%2 == 0){
                if(frequency_1 != frequency_2){
                    ans = false;
                }
            }
            else{
                if(abs(frequency_1 - frequency_2) != 1){
                    ans = false;
                }
            }
        }

        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}