// 

// B. 01 Game
// https://codeforces.com/problemset/problem/1373/B



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

    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        string s; 
        cin >> s;
        // getline(cin, s);
        int zero_count = 0, one_count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
                zero_count++;
            else    
                one_count++;
        }
        int temp = min(one_count, zero_count);
        if(temp%2==0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
}