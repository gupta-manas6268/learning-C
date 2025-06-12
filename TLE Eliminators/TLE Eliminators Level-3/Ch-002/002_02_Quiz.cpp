// Correct.
// This is My code.

// C. Pair Selection
// https://codeforces.com/edu/course/2/lesson/6/4/practice/contest/285069/problem/C




































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

    // I/P
    int n, k; cin >> n >> k;
    vector<double> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    // O/P
    double precision = 1e-8;
    double left = precision, right = 1e6;
    double ans;
    while((right - left) > precision){
        double mid = (left + right)/2;
        vector<double> c(n);
        for(int i=0; i<n; i++){
            c[i] = (a[i] - (mid * b[i]));
        }
        sort(c.begin(), c.end(), greater<>());

        double sum = 0;
        for(int i=0; i<k; i++){
            sum += c[i];
        }

        if(sum >= 0){
            ans = mid;
            left = mid+precision;
        }
        else{
            right = mid-precision;
        }
    }

    cout << setprecision(7) << fixed << ans << endl;
}