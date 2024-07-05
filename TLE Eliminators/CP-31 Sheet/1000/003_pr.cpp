// Correct.

// A. Helmets in Night Light
// https://codeforces.com/problemset/problem/1876/A































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
        int n, p; cin >> n >> p;
        vector<int> a, b;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            b.push_back(temp);
        }

        vector<pair<int,int>> A_B;
        for(int i=0; i<n; i++){
            A_B.push_back({b[i], a[i]});
        }
        sort(A_B.begin(), A_B.end());

        int cost = p;
        int people = (n-1);
        int i = 0;
        while((people > 0) && (A_B[i].first < p)){
            if(A_B[i].second <= people){
                cost += ((A_B[i].first) * (A_B[i].second));
                people -= A_B[i].second;
            }
            else{
                cost += ((A_B[i].first) * (people));
                people = 0;
            }
            i++;
        }
        if(people > 0){
            cost += (p * people);
        }

        cout << cost << endl;
    }
}