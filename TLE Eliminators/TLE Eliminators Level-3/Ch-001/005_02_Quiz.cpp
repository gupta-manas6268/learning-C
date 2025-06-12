// Correct.
// (This is my code with the help of ChatGPT.)

// B. Ropes
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B





































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

    int n, k; cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    double precision = 1e-7;

    double left = 0, right = *max_element(a.begin(), a.end());
    double ans = 1;

    for(int Count=0; Count <= 100; Count++){
        double mid = (left + right)/2;
        
        int num = 0;
        for(int i=0; i<n; i++){
            num += (a[i]/ mid);
        }

        if(num >= k){
            ans = mid;
            left = mid + precision;
        }
        else{
            right = mid - precision;
        }
    }

    cout << setprecision(7) << fixed;
    cout << ans << endl;
}