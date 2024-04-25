// Wrong.
// But, this code is given by mentor. So, make it Correct.

// B. T-primes
// https://codeforces.com/problemset/problem/230/B
















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


void Input(vector<int> &v){
    for(int i=0; i < v.size(); i++){
        cin >> v[i];
    }
}

const int N = 1e6 + 2;  // See this line carefully.
int is_prime[N];
vector<int> primes;
void sieve(){
    for(int i=2; i < N; i++){
        if(is_prime[i] == 0){
            primes.push_back(i);

            for(int j = 1ll * i * i; j < N; j += i){
                is_prime[j] = 1;
            }
        }
        is_prime[i] ^= 1;
    }
}

int Binary_Search_Sqrt(int a){
    int left = 0;
    int right = 1e6 + 2;
    int ans = 1;

    while(left <= right){
        int mid = (left + right)/ 2;

        if(mid*mid <= a){
            left = mid+1;
            ans = mid;
        }
        else if(mid*mid > a){
            right = mid-1;
        }
        else{
            return mid;
        }
    }

    return ans;
}

void solve(){
    int n; cin >> n;

    vector<int> v(n);
    Input(v);

    for(int i=0; i<n; i++){
        int sqrt = Binary_Search_Sqrt(v[i]);

        if((sqrt*sqrt == v[i]) && (is_prime[sqrt])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    sieve();
    while(tc--){
        solve();
    }
}