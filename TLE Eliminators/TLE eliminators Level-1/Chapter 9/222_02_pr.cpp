// Correct.

// B. Make Them Odd
// https://codeforces.com/contest/1277/problem/B


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        set <int> s;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            s.insert(x);
        }

        int count = 0;
        while(s.size() > 0){
            auto it = s.end();
            it--;

            if(*it % 2){
                s.erase(it);
            }
            else{
                count++;
                s.insert(*it / 2);
                s.erase(it);
            }
        }

        cout << count << endl;
    }
}