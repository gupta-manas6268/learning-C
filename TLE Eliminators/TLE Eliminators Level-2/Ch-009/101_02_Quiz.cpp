// This is Mentor's code.
// Correct.

// D - Snuke Prime
// https://atcoder.jp/contests/abc188/tasks/abc188_d




























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int N=1e6;
int difference_Array[N];
void solve(){
    long long n, x; cin >> n >> x;
    long long a[n], b[n], c[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    set<long long> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
        st.insert(b[i]+1);
    }

    int index = 0;
    map<int, int> mp;
    for(auto it : st){
        mp[it] = index;
        index++;
    }

    int compressed_size = index;
    vector<long long> cost(compressed_size);
    for(int i=0; i<n; i++){
        cost[mp[a[i]]] += c[i];
        if(mp[b[i]+1] < compressed_size){
            cost[mp[b[i]+1]] -= c[i];
        } 
    }
    for(int i=1; i<compressed_size; i++){
        cost[i] += cost[i-1];
    }

    long long ans = 0;
    vector<long long> days(st.begin(), st.end());
    for(int i=0; i < compressed_size-1; i++){
        long long span = days[i+1]-days[i];
        ans += (min(cost[i], x) * span);
    }

    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}