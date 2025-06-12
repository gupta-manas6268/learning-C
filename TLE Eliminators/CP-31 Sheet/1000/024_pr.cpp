// Correct.

// B. Numbers Box
// https://codeforces.com/problemset/problem/1447/B






























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
        int n, m; cin >> n >> m;
        vector<int> a;
        vector<int> mod;
        int negative = 0;
        for(int i=0; i < (n*m); i++){
            int temp; cin >> temp;
            a.push_back(temp);
            if(temp < 0){ negative++;}

            mod.push_back(abs(temp));
        }

        int Sum = 0;
        sort(mod.begin(), mod.end());
        for(int i=0; i < (n*m); i++){
            Sum += (mod[i]);
        }

        if((negative % 2) != 0){
            Sum -= (2 * mod[0]);
        }

        cout << Sum << endl;
    }
}