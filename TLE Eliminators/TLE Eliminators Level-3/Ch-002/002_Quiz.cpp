// Correct.

// C. Pair Selection
// https://codeforces.com/edu/course/2/lesson/6/4/practice/contest/285069/problem/C





































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool checker(vector<double> &c, int k, int n){
    double sum = 0;
    sort(c.begin(), c.end());
    for(int i=0; i<k; i++){
        sum += c[n - i - 1];
    }

    return sum >= 0;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<pair<double,double>> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    double error = 1e-7;
    double left = error;
    double right = 1e6;
    double ans;

    // iterations = log2(Search Space) = log(10 ^ 13) ~ 60.
    for(int iterations = 0; iterations < 60; iterations++){
        double mid = (left + right) / 2;
        vector<double> c(n);
        for(int i=0; i<n; i++){
            c[i] = arr[i].first - (mid * arr[i].second);
        }

        if(checker(c, k, n)){
            ans = mid;
            left = mid + error;
        }
        else{
            right = mid - error;
        }
    }

    // TC = (n * log2(n)) * (log2(10 ^ (5 + 7))).
    // TC = (n * log2(n)) * (log2(10 ^ 12)).
    cout << setprecision(7) << fixed << ans << endl;
}