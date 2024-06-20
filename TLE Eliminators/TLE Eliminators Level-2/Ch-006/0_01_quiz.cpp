// This is Mentor's code.
// Correct.

// Digit Space
// https://www.codechef.com/problems/DSP



#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int N = 1e7+5;
int sieve[N];

// Sieve => Greates Prime Factor.
void Sieve(){
    for(int i=0; i<N; i++){
        sieve[i] = i;
    }
    for(int i=2; i*i < N; i++){
        if(sieve[i] != i) continue;
        for(int j = i*i; j<N; j += i){
            if(sieve[j] == j){
                sieve[j] = i;
            }
        }
    }
}

void solve(string x, string y){
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    set<int> dx, dy;
    do{
        if(x[0] != '0'){
            // stoi => string to int.
            int t = stoi(x);
            while(t > 1){
                dx.insert(sieve[t]);
                t /= sieve[t];
            }
        }
    } while(next_permutation(x.begin(), x.end()));

    do{
        if(y[0] != '0'){
            int t = stoi(y);
            while(t > 1){
                dy.insert(sieve[t]);
                t /= sieve[t];
            }
        }
    } while(next_permutation(y.begin(), y.end()));

    int ans = 1;
    for(auto it:dx){
        if(dy.find(it) != dy.end()){
            ans = max(ans, it);
        }
    }
    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    Sieve();

    while (tc--){
        string x, y; cin >> x >> y;
        solve(x, y);
    }
}