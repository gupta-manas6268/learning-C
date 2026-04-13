// Correct.

// D - Between Two Arrays
// https://atcoder.jp/contests/abc222/tasks/abc222_d




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353; // Prime no.
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for(int i=0; i < n; i++){ cin >> a[i];}
    for(int i=0; i < n; i++){ cin >> b[i];}

    // Solution
    vector<int> mp(3000+5, 0);
    for(int i=0; i < n; i++){
        if(i == 0){ 
            for(int j = a[i]; j <= b[i]; j++){ mp[j]++;}
        }
        else{
            if(a[i] < b[i-1]){
                vector<int> mp_2(3000+5, 0);

                // a[i-1] to a[i] 
                int temp_ans = 0;
                for(int j = a[i-1]; j <= a[i]; j++){
                    temp_ans += mp[j];
                    temp_ans %= MOD;
                    mp[j] = 0;
                }
                for(int j = a[i]; j <= b[i]; j++){
                    mp_2[j] = temp_ans;
                }
                
                // a[i]+1 to b[i-1]
                temp_ans = 0;
                for(int j = a[i]+1; j <= b[i]; j++){
                    temp_ans += mp[j];
                    temp_ans %= MOD;

                    mp_2[j] += temp_ans;
                    mp_2[j] %= MOD;
                }
                mp = mp_2;
            }
            else{ // (a[i] >= b[i-1]) 
                int temp_ans = 0;
                for(int j = a[i-1]; j <= b[i-1]; j++){
                    temp_ans += mp[j];
                    temp_ans %= MOD;
                    mp[j] = 0;
                }
                for(int j = a[i]; j <= b[i]; j++){
                    mp[j] = temp_ans;
                }
            }
        }
    }
    int ans = 0;
    for(int i=0; i <= 3000; i++){
        ans += mp[i];
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
    // TC = O(power(n, 2)) = O(1e6)
    // SC = O(n) = O(1e3)
}