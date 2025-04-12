// Correct.
// (I Solved by seeing Test-case in Submissions.)

// B. Rectangles
// https://codeforces.com/problemset/problem/844/B



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            result *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<vector<int>> vec;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int temporary; cin >> temporary;
            temp.push_back(temporary);
        }
        vec.push_back(temp);
    }

    // Solution
    int ans = 0;
    for(int i=0; i<n; i++){
        int val_0 = 0, val_1 = 0;
        for(int j=0; j<m; j++){
            if(vec[i][j] == 1){ val_1++;}
            else{ val_0++;}
        }
        ans += (power(2, val_0) - 1);
        ans += (power(2, val_1) - 1);
    }
    for(int j=0; j<m; j++){
        int val_0 = 0, val_1 = 0;
        for(int i=0; i<n; i++){
            if(vec[i][j] == 1){ val_1++;}
            else{ val_0++;}
        }
        ans += (power(2, val_0) - 1);
        ans += (power(2, val_1) - 1);
    }
    ans -= (n * m);

    // O/P
    cout << ans << endl;
}