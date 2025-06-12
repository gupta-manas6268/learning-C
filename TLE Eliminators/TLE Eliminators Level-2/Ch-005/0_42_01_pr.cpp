// Wrong.

// B. Longest Divisors Interval
// https://codeforces.com/contest/1855/problem/B



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<long long> factor(long long n){
    vector<long long> facts;
    facts.push_back(1);
    facts.push_back(n);
    for(long long i=2; i*i <= n; i++){
        if((n%i == 0) && (i != (n/i))){
            facts.push_back(i);
            facts.push_back(n/i);
        }
        else if((n%i == 0) && (i == (n/i))){
            facts.push_back(i);
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
    
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n; cin >> n;
        vector<long long> ans;
        ans.push_back(1);
        vector<long long> facts = factor(n);
        for(long long i=1; i < facts.size(); i++){
            if(facts[i] == facts[i-1] + 1){
                long long size = 2;
                i++;
                while(facts[i] == facts[i-1] + 1){
                    i++;
                    size += 1;
                }
                ans.push_back(size);
            }
        }

        long long Ans = *max_element(ans.begin(), ans.end());
        cout << Ans << endl;
    }
}