// Correct.

// A. One and Two
// https://codeforces.com/problemset/problem/1788/A



































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
        int n; cin >> n;
        vector<int> a;
        vector<int> index;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
            if(temp == 2){
                index.push_back(i+1);
            }
        }

        int k;
        int Size = index.size();
        if(Size%2 != 0){ k = -1;}
        else{
            if(Size == 0){ k = 1;}
            else{ k = index[(Size/2) - 1];}
        }

        cout << k << endl;
    }
}