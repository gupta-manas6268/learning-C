// 

// A. Raising Bacteria
// https://codeforces.com/problemset/problem/579/A


#include<bits/stdc++.h>
using namespace std;

// #define endl '\n'
// #define int long long 

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

int main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int x; cin >> x;
    vector<int> ans;
    int i = 0;
    // while((bitset<40>(x)) > 0){
        // ans.push_back((bitset<40>(x) >> 1));
        bitset<5> bs(x);
        int result =  (bs >> 0).to_ulong() & (1 << 2);
        cout << result << endl;
        // bitset<40>(x) >> 1;
        // i++;
    // }

    // int Ans;
    // for(int i=0; i < ans.size(); i++){
    //     // Ans += ans[i];
    // }

    // cout << Ans << endl;

    return 0;
}