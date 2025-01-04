// 

// Sum of Three Values
// https://cses.fi/problemset/task/1641



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
    int n, x; cin >> n >> x;
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        vec.push_back({temp, i+1});
    }
    sort(vec.begin(), vec.end());

    // O/P
    int i = 0, j = i+1, k = n-1;
    int a, b, c;
    bool ans = false;
    bool Break = false;
    while((i < n) && (j < k)){
        if(Break == true){ break;}
        int sum = (x - vec[i].first);

        while(k > j){
            if((vec[j].first + vec[k].first) == sum){
                a = vec[i].second;
                b = vec[j].second;
                c = vec[k].second;
                ans = true;
                Break = true;
                break;
            }
            else if((vec[j].first + vec[k].first) < sum){
                break;
            }
            k--;
        }
        i++; j++;
    }
}