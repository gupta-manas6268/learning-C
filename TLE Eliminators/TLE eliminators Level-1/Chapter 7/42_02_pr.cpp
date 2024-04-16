// Wrong.
// Gives, Run-Time error.

// https://codeforces.com/problemset/problem/1675/B

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){ ans *= a;}

    return ans;
}

int logarithm(int n){
    int ans = 0;
    while(n > 1){
        n /= 2;
        ans ++;
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){ cin >> a[i];}

        int ans = 0;

        for(int i = n-1; i>=0; i--){
            if(n == 1){ break;}
            if((a[i] == 0) && (i != 0)){ ans = -1; break;}

            if(a[i-1] >= a[i]){
                int division = (a[i-1] / a[i]);
                int powerTwo = logarithm(division) + 1;

                a[i-1] /= power(2, powerTwo);

                print(a, n);
                ans += (powerTwo);
            }
        }

        cout << ans << endl;
    }
}