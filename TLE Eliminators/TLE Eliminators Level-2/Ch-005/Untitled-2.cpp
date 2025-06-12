#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sieve(int n){
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

    vector<int> Primes;
    for(int i=0; i<=n; i++){
        if(primes[i] == true){
            Primes.push_back(i);
        }
    }

    return Primes;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int a[n][m];
    int maxi = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            maxi = max(maxi, a[i][j]);
        }
    }

    vector<int> primes = sieve(maxi+1000);
    int value[n][m];
    int row_Sum[n] = {0};
    int col_Sum[m] = {0};
    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int lower = *lower_bound(primes.begin(), primes.end(), a[i][j]);
            value[i][j] = (lower - a[i][j]);
            row_Sum[i] += value[i][j];
        }
        mini = min(mini, row_Sum[i]);
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            col_Sum[j] += value[i][j];
        }
        mini = min(mini, col_Sum[j]);
    }
    
    cout << mini << endl;
}