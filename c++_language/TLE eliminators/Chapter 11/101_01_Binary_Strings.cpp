// *********** This is Part-02 of the Lecture. ***********






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;

void solve(string s){
    if(s.size() == n){
        cout << s << endl;

        return;
    }

    solve(s + "0"); // O(N) 
    solve(s + "1"); // O(N)

    // string t = s + "0";
    // string u = s + "1";

    // solve(t);
    // solve(u);

}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    solve("");
}