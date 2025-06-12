// 

// B. Just Eat It!
// https://codeforces.com/problemset/problem/1285/B



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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        vector<int> a(n);
        int Summation = 0;
        for(int i=0; i<n; i++){ cin >> a[i]; Summation += a[i];}

        // Solution
        int Maxi = 0, Size = 0, Kadane = 0;
        for(int i=0; i<n; i++){
            if((Size == 0) && (a[i] <= 0)){}
            else{
                Kadane += a[i];
                Size++;
                if(Size != n){
                    Maxi = max(Maxi, Kadane);
                }

                if(Kadane <= 0){
                    Kadane = 0; Size = 0;
                }
            }
        }

        // O/P
        if(Summation > Maxi){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}