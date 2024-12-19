// 

// C. Adding Powers
// https://codeforces.com/problemset/problem/1312/C



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
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
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

    int tc; cin >> tc;

    while (tc--){
        int n, k; cin >> n >> k;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin>>temp;
            a.push_back(temp);
        }

        bool ans = true;
        for(int i=0; i<n; i++){
            if((a[i] % (power(k,i))) != 0){
                ans = false; break;
            }
        }

        if(ans == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}