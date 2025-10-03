// Correct.
// (This is My 2nd-time code.)

// B. Prime Matrix
// https://codeforces.com/contest/271/problem/B



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Primes;
void sieve(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);
    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i]){
            for(int j = i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    for(int i=2; i <= n; i++){
        if(primes[i]){ Primes.push_back(i);}
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){ 
            cin >> vec[i][j];
        }
    }
    
    // Solution
    sieve(1e5+1e3);
    vector<vector<int>> Min_Distance(n, vector<int>(m));
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){ 
            int temp = vec[i][j];
            int Lower = lower_bound(Primes.begin(), Primes.end(), temp) - Primes.begin();
            Min_Distance[i][j] = Primes[Lower]-vec[i][j];
        }
    }

    int ans = INT_MAX;
    for(int i=0; i < n; i++){
        int temp = 0;
        for(int j=0; j < m; j++){ temp += Min_Distance[i][j];}
        ans = min(ans, temp);
    }
    for(int i=0; i < m; i++){
        int temp = 0;
        for(int j=0; j < n; j++){ temp += Min_Distance[j][i];}
        ans = min(ans, temp);
    }

    // O/P
    cout << ans << endl;
}