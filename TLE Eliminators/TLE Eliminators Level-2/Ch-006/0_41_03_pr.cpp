// This is my version of Mentor's code.

// Wrong.

// D - Coprime 2
// https://atcoder.jp/contests/abc215/tasks/abc215_d



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b){
    if(a == 0){ return b;}
    return gcd(b % a, a);
}

vector<int> factor;
void Factor(int n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            factor.push_back(i);
        }
        while(n%i == 0){
            n /= i;
        }
    }
    if(n > 1){
        factor.push_back(n);
    }
    sort(factor.begin(), factor.end());
    auto it = unique(factor.begin(), factor.end());
    factor.erase(it, factor.end());
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    for(int i=0; i <= n; i++){
        Factor(a[i]);
    }

    vector<int> ans;
    ans.push_back(1);
    // for(int i=2; i <= m; i++){
    //     for(int j=0; j < factor.size(); j++){
    //         if(i % factor[j] == 0){
    //             break;
    //         }
    //         else if((i % factor[j] != 0) && ((i < factor[j+1]) || (j+1 == factor.size()))){
    //             ans.push_back(i);
    //             break;
    //         }
    //         else if(i < factor[j]){
    //             break;
    //         }
    //     }
    // }

    bool primes[m+1];
    for(int i=0; factor[i] <= m; i++){
        int a = factor[i];
        while(a < m){
            primes[factor[i]] = false;
            a += factor[i];
        }
    }

    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}