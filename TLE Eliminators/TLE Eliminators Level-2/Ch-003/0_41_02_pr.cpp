// Wrong.

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
        int Steps[60] = {0};
        for(int i=0; i<n; i++){
            while(a[i] > 0){
                int temp = 0;

                // X & Y => For Precomputation of powers of (k, temp) & (k, temp+1).
                //      So, Time-Complexity will be less.
                int X = -1, Y = -1;
                while(temp >= 0){
                    if(X == -1){
                        X = power(k, temp);
                        Y = power(k, temp+1);
                    }
                    else{
                        X = Y;
                        Y = power(k, temp+1);
                    }

                    if((X <= a[i]) && (Y > a[i])){
                        break;
                    }
                    temp++;
                }
                Steps[temp]++;
                a[i] -= X;
            }
        }

        for(int i=0; i<60; i++){
            if(Steps[i] > 1){
                ans = false;
            }
        }

        if(ans == false){ cout << "NO" << endl;}
        else{ cout << "YES" << endl;}
    }
}