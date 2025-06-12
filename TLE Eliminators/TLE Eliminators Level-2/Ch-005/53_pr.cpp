// Correct.

// D - Happy New Year 2023
// https://atcoder.jp/contests/abc284/tasks/abc284_d


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> factor(int n){
    vector<int> facts;
    for(int i=2; i*i <= n; i++){
        while(n%i == 0){
            facts.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        facts.push_back(n);
    }

    return facts;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n; cin >> n;

        int a;
        for(int i=2; i*i*i < n; i++){
            if(n%i == 0){
                a = i; break;
            }
        }

        n /= a;
        int p, q;
        if(n%a == 0){
            p = a;
            q = (n/a);
        }
        else{
            q = a;
            p = sqrt(n);
        }

        cout << p << " " << q << endl;
    }
}