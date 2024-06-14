// Correct.

// B. Number Factorization
// https://codeforces.com/problemset/problem/1787/B


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans *= a;
    }
    return ans;
}

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
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        vector<int> a, p;
        int k = 0;
        while(n > 1){
            vector<int> facts = factor(n);

            int product = 1;
            for(int j=0; j < facts.size(); j++){
                if(j == 0){
                    product *= facts[j];
                }
                if(product%facts[j] != 0){
                    product *= facts[j];
                }
            }
            a.push_back(product);

            for(int i=1; i; i++){
                if((n % power(product, i)) != 0){
                    p.push_back(i-1);
                    n /= power(product, i-1);
                    k++;
                    break;
                }
            }
        }

        int sum = 0;
        for(int i=0; i < a.size(); i++){
            sum += (a[i] * p[i]);
        }

        cout << sum << endl;
    }
}