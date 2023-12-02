// *********** This is Part-02 of the Lecture. ***********






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;

void solve(string &s){
    if(s.size() == n){
        cout << s << endl;

        return;
    }

    // s += "0";
    s.push_back('0');
    solve(s);
    s.pop_back();

    // s += "1";
    s.push_back('1');
    solve(s);
    s.pop_back();

}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    solve();
}