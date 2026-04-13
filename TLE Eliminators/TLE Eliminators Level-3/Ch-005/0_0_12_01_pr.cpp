// Correct.
// I checked this code in Chat-GPT only for line-84 to 86.

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
    vector<int> vec(n);
    for(int i=0; i<n; i++){ cin >> vec[i];}

    // Solution
    vector<pair<int,int>> vec_2(n);
    for(int i=0; i<n; i++){
        pair<int,int> p = {vec[i] % m, vec[i]};
        vec_2[i] = p;
    }
    sort(vec_2.begin(), vec_2.end());

    vector<pair<int,int>> num_times;
    int times = 0;
    for(int i=0; i<n; i++){
        times++;
        if((i == n-1) || (vec_2[i].first != vec_2[i+1].first)){
            num_times.push_back({times, vec_2[i].first});
            times = 0;
        }
    }
    sort(num_times.begin(), num_times.end());
    int size_num_times = num_times.size();

    int val = num_times[size_num_times-1].second;
    // int index = lower_bound(vec_2.begin(), vec_2.end(), val) - vec_2.begin(); 
    //  Above line gives me Compilation error, because it is a
    //  'vector<pair<int,int>>'.
    int index = lower_bound(vec_2.begin(), vec_2.end(), make_pair(val, 0LL)) - vec_2.begin();

    bool ans = false;
    vector<int> Ans;
    if(k <= num_times[size_num_times-1].first){
        ans = true;
        for(int i=0; i<k; i++){
            Ans.push_back(vec_2[index+i].second);
        }
    }

    // O/P
    if(ans == true){
        cout << "Yes" << endl;
        for(int i=0; i < Ans.size(); i++){
            cout << Ans[i] << " ";
        }
        cout << endl;
    }
    else{ cout << "No" << endl;}
}