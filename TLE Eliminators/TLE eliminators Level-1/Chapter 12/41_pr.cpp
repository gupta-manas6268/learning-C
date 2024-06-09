// 

// Xor and Multiply
// https://www.codechef.com/submit/XORMUL



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}

vector<int> Bitset(int a, int n){
    vector<int> ans;
    int i = 0;
    while(a > 0){
        ans.push_back(a % 2);
        a /= 2;
        i++;
    }

    return ans;
}

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n, a, b; cin >> n >> a >> b;
        vector<int> A1 = Bitset(a, n);
        vector<int> A2 = Bitset(b, n);

        for(int i=0; i<n; i++){
            cout << A1[i];
        }

        int x1 = 0;

        int Different_A1 = 0;
        int MSB;
        // for(int i=0; i<n; i++){
        //     if(A1[i] == A2[i]){
        //         if(A1[i] == 0){
        //             x1 += power(2, i);
        //         }
        //     }
        //     else{
        //         if(A1[i] == 1){
        //             Different_A1 += power(2, i);
        //         }
        //         MSB = i;
        //     }
        // }
        // int x2 = Different_A1 ^ power(2, MSB);

        // int x = x1 + x2;
        // cout << x << endl;
    }
}