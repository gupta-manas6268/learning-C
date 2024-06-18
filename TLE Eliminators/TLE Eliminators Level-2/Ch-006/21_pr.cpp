// Correct.

// D. Buying Shovels
// https://codeforces.com/problemset/problem/1360/D



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector <long long> factor(long long n){
    vector <long long> vec;
    vec.push_back(1);
    vec.push_back(n);

    for(long long i=2; i*i <= n; i++){
        if(n%i == 0){
            vec.push_back(i);
            vec.push_back(n/i);
        }
    }
    sort(vec.begin(), vec.end());

    return vec;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n, k; cin >> n >> k;
        vector<long long> vec = factor(n);

        long long ans;
        for(long long i=0; i < (vec.size()); i++){
            if(vec[i] > k){
                break;
            }
            else{
                ans = (n / vec[i]);
            }
        }

        cout << ans << endl;
    }
}