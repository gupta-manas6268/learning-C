// Correct.

// B. Karen and Coffee
// https://codeforces.com/contest/816/problem/B




































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
    int n, k, q; cin >> n >> k >> q;
    vector<int> l(n), r(n);
    for(int i=0; i < n; i++){ cin >> l[i] >> r[i];}
    vector<int> a(q), b(q);
    for(int i=0; i < q; i++){ cin >> a[i] >> b[i];}

    // Solution
    vector<int> freq((2*1e5)+1, 0);
    for(int i=0; i < n; i++){
        l[i]--; r[i]--;
        freq[l[i]]++;
        freq[r[i]+1]--;
    }
    vector<int> Pref_Freq((2*1e5), 0);
    for(int i=0; i < (2*1e5); i++){
        if(i == 0){
            Pref_Freq[i] = freq[i];
        }
        else{
            Pref_Freq[i] = (Pref_Freq[i-1] + freq[i]);
        }
    }

    vector<int> Points((2*1e5), 0);
    for(int i=0; i < (2*1e5); i++){
        if(Pref_Freq[i] >= k){
            Points[i] = 1;
        }   
    }
    vector<int> Good_Points((2*1e5), 0);
    for(int i=0; i < (2*1e5); i++){
        if(i == 0){
            Good_Points[i] = Points[i];
        }
        else{
            Good_Points[i] = (Good_Points[i-1] + Points[i]);
        }
    }

    // O/P
    for(int i=0; i < q; i++){
        a[i]--; b[i]--;
        int ans;
        if(a[i] > 0){
            ans = (Good_Points[b[i]] - Good_Points[a[i]-1]);
        }
        else{
            ans = Good_Points[b[i]];
        }
        cout << ans << endl;
    }
    // O(n + q + (2 * 1e5))
}