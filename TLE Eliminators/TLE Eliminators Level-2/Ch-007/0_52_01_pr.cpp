// Wrong.

// A. Valeriy and Deque
// https://codeforces.com/problemset/problem/1179/A




















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

    int n, q; cin >> n >> q;
    deque<int> arr;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        arr.push_back(a);
    }
    vector<int> query;
    if(q == 0){
        cout << endl;
    }
    else{
        for(int i=0; i<q; i++){
            int a; cin >> a;
            query.push_back(a);
        }

        vector<pair<int, int>> ans;

        int max_Query = *max_element(query.begin(), query.end());
        for(int i=1; i <= max_Query; i++){
            int a = arr[0];
            int b = arr[1];

            ans.push_back({a, b});

            if(a > b){
                arr.pop_front();
                arr.pop_front();

                arr.push_front(a);
                arr.push_back(b);
            }
            else{
                arr.pop_front();
                arr.push_back(a);
            }
        }

        for(int i=0; i<q; i++){
            int a = ans[query[i]-1].first;
            int b = ans[query[i]-1].second;

            cout << a << " " << b << endl;
        }
    }
}