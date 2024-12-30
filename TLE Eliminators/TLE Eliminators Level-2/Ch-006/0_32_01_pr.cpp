// Watch this Video-Solution one more time for clearity.
//  https://www.youtube.com/watch?v=2S7VLAkMK5g




// Wrong.

// C - Factors of Factorial
// https://atcoder.jp/contests/abc052/tasks/arc067_a



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

long long fact(int n){
    long long ans = 1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }

    return ans;
}

long long factor(long long n){
    long long ans = 2;
    for(long long i=2; i*i <= n; i++){
        if(n%i == 0){
            if(i != (n/i)){ ans += 2;}
            else{ ans += 1;}
        }
    }
    return ans;
}

vector<int> Factor(int n){
    vector<int> facts;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            if(i != (n/i)){
                facts.push_back(i);
                facts.push_back(n/i);
            }
            else{
                facts.push_back(i);
            }
        }
    }
    sort(facts.begin(), facts.end());
    return facts;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> Ans = Factor(n);
    for(int i=0; i<Ans.size()-1; i++){
        cout << Ans[i] << endl;
    }
    // int number = fact(n);
    // cout << number << endl;
    // int ans = factor(number) % MOD;
    // cout << ans << endl;
}