// 

// H. Maximal AND
// https://codeforces.com/problemset/problem/1669/H



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

    int tc; cin >> tc;

    while (tc--){
        int n, k; cin >> n >> k;
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin>>temp;
            a.push_back(temp);
        }

        int Places[31] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<31; j++){
                int temp = ((a[i] >> j) & 1);
                if(temp == 1){
                    Places[j]++;
                }
            }
        }

        int ans = 0;
        for(int j=30; j>=0; j--){
            int temp = (n - Places[j]);
            if(k >= temp){
                k -= temp;
                ans += power(2, j);
            }
        }

        int AND;
        for(int i=0; i<(n-1); i++){
            if(i == 0){
                AND = (a[i] & a[i+1]);
            }
            else{
                AND = (AND & a[i+1]);
            }
        }
        ans += AND;

        cout << ans << endl;
    }
}