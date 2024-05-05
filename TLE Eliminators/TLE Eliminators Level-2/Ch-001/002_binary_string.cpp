#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
void rec(string s){
    // Base Case
    if(s.size() == n){
        cout << s << endl;
        return;
    }

    s.push_back('0');
    rec("");
    s.pop_back();

    s.push_back('1');
    rec("");
    s.pop_back();
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    rec("");
}