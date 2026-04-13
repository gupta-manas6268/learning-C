// Correct.
// (This is My 2nd time code.)

// B. Divisiblity of Differences
// https://codeforces.com/contest/876/problem/B































// [Hint: Modulo each element by 'm']


















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
    int n, k, m; cin >> n >> k >> m;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    bool ans = false;
    vector<int> Result;
    vector<pair<int,int>> vec(n);
    for(int i=0; i < n; i++){
        vec[i] = {a[i] % m, a[i]};
    }
    sort(vec.begin(), vec.end());
    
    for(int i=0; i < n; i++){
        if(i == 0){
            Result.push_back(vec[i].second);
        }
        else{
            if(vec[i].first != vec[i-1].first){
                Result.clear();
                Result.push_back(vec[i].second);
            }
            else{
                Result.push_back(vec[i].second);
            }
        }

        if(Result.size() == k){
            ans = true; break;
        }
    }

    // O/P
    if(ans == true){
        cout << "Yes" << endl;
        for(int i=0; i < Result.size(); i++){
            cout << Result[i] << " ";
        }
    }
    else{ cout << "No" << endl;}
}