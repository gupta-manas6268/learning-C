// Bitmasking







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

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        a[i] = (i+1);
    }
 
    for(int mask = 0; mask < (1 << n); mask++){
        for(int i=0; i<n; i++){
            if((mask & (1 << i)) != 0){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}