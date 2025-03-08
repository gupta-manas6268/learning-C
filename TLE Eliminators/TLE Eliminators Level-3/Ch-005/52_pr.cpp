// Correct.

// D - Div Game
// https://atcoder.jp/contests/abc169/tasks/abc169_d




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<pair<int,int>> Prime_factor(int n){  // O(sqrt(n)).
    vector<pair<int,int>> facts;
    for(int i=2; i*i <= n; i++){
        int Power = 0;
        while(n%i == 0){
            Power++;
            n /= i;
        }
        if(Power != 0){
            facts.push_back({i,Power});
        }
    }
    if(n > 1){
        facts.push_back({n, 1});
    }

    return facts;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int num; cin >> num;

    // Solution
    vector<pair<int,int>> prime_factors = Prime_factor(num);
    
    int ans = 0;
    for(int i=0; i < prime_factors.size(); i++){
        int temp = 0;
        int exponent = prime_factors[i].second;
        int left = 0, right = exponent;
        while(left <= right){
            int mid = (left + right)/ 2;

            int val = (mid * (mid + 1))/ 2;
            if(val <= exponent){
                left = mid+1;
                temp = mid;
            }
            else{
                right = mid-1;
            }
        }

        ans += temp;
    }

    // O/P
    cout << ans << endl; 
    // TC = O(sqrt(n)).
}