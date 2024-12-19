// Wrong.

// B. Johnny and His Hobbies
// https://codeforces.com/problemset/problem/1362/B






































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
        vector<int> S;
        bool zero = false;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            if(temp == 0){ zero = true;}
            S.push_back(temp);
        }

        if(zero == true){
            sort(S.begin(), S.end());
            int size = S.size();
            for(int i=0; i<size; i++){
                int temp = S[i];
                for(int j=0; j<n; j++){
                    if((temp^S[i]))
                }
            }
        }
    }
}