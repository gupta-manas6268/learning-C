// Correct.

// B. Nastya and Door
// https://codeforces.com/contest/1341/problem/B




































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
        int n, k; cin >> n >> k;
        vector<pair<int, bool>> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back({temp, false});
        }

        // O/P
        int peak = 0, left = 1;
        int Max_Peak;
        for(int i=0; i<k; i++){
            if((i-1 >= 0) && (i+1 < k)){
                if((a[i].first > a[i-1].first) && (a[i].first > a[i+1].first)){
                    peak++; a[i].second = true;
                }
            }
        }
        Max_Peak = peak;

        for(int i=k; i<n; i++){
            if(a[i-k+1].second == true){
                peak--;
            } 
            if((a[i-1].first > a[i-2].first) && (a[i-1].first > a[i].first)){
                peak++; a[i-1].second = true;
            }

            if(peak > Max_Peak){
                left = (i-k+2);
                Max_Peak = peak;
            }
        }

        int t = Max_Peak+1;
        cout << t << " " << left << endl;
    }
}