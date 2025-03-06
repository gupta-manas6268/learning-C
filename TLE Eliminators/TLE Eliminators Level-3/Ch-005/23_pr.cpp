// Correct.

// F. We Were Both Children
// https://codeforces.com/problemset/problem/1850/F




































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
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            if(temp <= n){
                a.push_back(temp);
            }
        }

        // O/P
        sort(a.begin(), a.end());
        vector<pair<int,int>> Num_times_a;
        int times = 0;
        for(int i=0; i < a.size(); i++){
            times++;
            if(i < (a.size() - 1)){
                if(a[i] != a[i+1]){
                    Num_times_a.push_back({a[i], times});
                    times = 0;
                }
            }
            else{
                Num_times_a.push_back({a[i], times});
            }
        }

        vector<int> Passing_No(n+1);
        for(int i=0; i <= n; i++){
            Passing_No[i] = 0;
        }

        for(int i=0; i < Num_times_a.size(); i++){
            int y = 1;
            while((Num_times_a[i].first * y) <= n){
                Passing_No[Num_times_a[i].first * y] += Num_times_a[i].second;
                y++;
            }
        }

        int max_Val = 0;
        for(int i=1; i <= n; i++){
            max_Val = max(Passing_No[i], max_Val);
        }

        cout << max_Val << endl;
    }
}