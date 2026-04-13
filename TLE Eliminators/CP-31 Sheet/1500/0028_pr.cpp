// (Check it on Codeforces, because currently 'In queue'.)
// 

// B. Minimize the error
// https://codeforces.com/problemset/problem/960/B






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, k1, k2; cin >> n >> k1 >> k2;
    vector<int> a(n), b(n);
    for(int i=0; i < n; i++){ cin >> a[i];}
    for(int i=0; i < n; i++){ cin >> b[i];}

    // Solution
    vector<int> c(n);
    int Sum_c = 0;
    for(int i=0; i < n; i++){
        c[i] = abs(b[i]-a[i]);
        Sum_c += c[i];
    }
    int k = (k1 + k2);
    int diff = abs(Sum_c - k);

    int quotient = (diff / n);
    int remainder = (diff % n);

    int ans;
    if(Sum_c >= k){
        ans = (((n - remainder)*(quotient)) + ((remainder) * (quotient + 1)));
    }
    else{
        if((diff % 2) == 0){
            if(((diff / 2) >= k1) && ((diff / 2) >= k2)){
                ans = 0;
            }
            else{
                ans = (((n - remainder)*(quotient)) + ((remainder) * (quotient + 1)));
            }
        }
        else{

        }
    }

    // O/P
    cout << ans << endl;
    // TC = O(n)
}