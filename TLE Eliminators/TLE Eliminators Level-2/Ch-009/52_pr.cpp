// 

// C. Good Subarrays
// https://codeforces.com/contest/1398/problem/C



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> string_to_int(string s){
    vector<int> ans;
    for(int i=0; i < s.size(); i++){
        int temp;
        temp = (int)(s[i]) - 48;
        // cout << temp << " ";

        ans.push_back(temp);
    }
    // cout << endl;
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> num = string_to_int(s);

        vector<int> prefix_Sum;
        prefix_Sum.push_back(0);
        for(int i=0; i < num.size(); i++){
            int temp = num[i] + prefix_Sum[i];
            prefix_Sum.push_back(temp);
        }
    }
}