// 

// D - Five, Five Everywhere
// https://atcoder.jp/contests/abc096/tasks/abc096_d



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sieve(int n){
    bool primes[1000+1];
    fill(primes, primes+1000+1, true);
    vector<int> ans;
    int count = 0;
    if(n%2 != 0){
        ans.push_back(2);
        count++;
    }

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= 1000; i++){
        if(count >= n){
            break;
        }
        else if(primes[i] == true){
            if(i != 2){
                ans.push_back(i);
                count++;
            }
            for(int j=i*i; j <= 1000; j += i){
                primes[j] = false;
            }
        }
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    vector<int> ans = sieve(n);
    int size = ans.size();
    for(int i=0; i < size; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}