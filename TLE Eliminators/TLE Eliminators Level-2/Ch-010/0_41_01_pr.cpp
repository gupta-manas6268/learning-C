// Wrong.

// A. Points on Line
// https://codeforces.com/problemset/problem/251/A































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

long long factorial(int n){
    int ans = 1;
    for(int i=1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

long long nCr(int n, int r){
    int ans = (factorial(n)/ (factorial(r) * factorial(n-r)));
    return ans;
}

long long nPr(int n, int r){
    int ans = (factorial(n)/ (factorial(r)));
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, d; cin >> n >> d;
    vector<int> x;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        x.push_back(temp);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        int target = (d + x[i]);
        int index = upper_bound(x.begin(), x.end(), target) - x.begin();
        index--;

        if((index - i) < 2){

        }
        else{
            // ans += nCr(index-i, 2);
            ans += nPr(index-i, 2);
        }
    }

    cout << ans << endl;
}