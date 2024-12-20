// Correct.

// A. Get together
// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A









































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// 'checker' function => Returns 'true', if all ranges overlap,
//                        or returns 'false'.
bool checker(double time, vector<pair<double,double>> &people){
    pair<double,double> curr = {-1e18, 1e18};

    for(auto i : people){
        double position = i.first;
        double speed = i.second;
        
        pair<double,double> range = {position - (speed * time), position + (speed * time)};
        curr = {max(curr.first, range.first), min(curr.second, range.second)};

        if(curr.first > curr.second){
            return false;
        }
    }

    return true;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<pair<double,double>> people(n);
    for(int i=0; i<n; i++){
        cin >> people[i].first >> people[i].second;
    }

    long double error = 1e-7;
    long double left = 0, right = 1e9;
    // Search Space = (10 ^ 16).
    // TC = log2(10 ^ 16).
    long double ans;

    for(int i=0; i < 70; i++){
        double mid = (left + right) / 2;

        if(checker(mid, people)){
            ans = mid;
            right = mid - error;
        }
        else{
            left = mid + error;
        }
    }

    cout << setprecision(7) << fixed << ans << endl;
}