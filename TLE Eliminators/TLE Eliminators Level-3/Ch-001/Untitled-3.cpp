// 

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
    vector<double> x, v;
    for(int i=0; i<n; i++){
        double temp1, temp2; cin >> temp1 >> temp2;
        x.push_back(temp1);
        v.push_back(temp2);
    }

    double left = *min_element(x.begin(), x.end());
    double right = *max_element(x.begin(), x.end());
    double precision = 1e-7;

    for(int count=0; count <= 100; count++){
        double mid = (left + right)/ 2;

        int time = 0;
        for(int i=0; i<n; i++){
            int temp_time = abs((mid - x[i])/ v[i]);
            time = max(time, temp_time);
        }
    }
}