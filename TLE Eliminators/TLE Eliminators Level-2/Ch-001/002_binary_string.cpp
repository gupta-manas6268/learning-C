#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n; vector<char> s;
void rec(){
    // Base Case
    if(s.size() == n){
        for(int i=0; i<n; i++){
            cout << s[i];
        }
        cout << endl;
        return;
    }

    s.push_back('0');
    rec();
    s.pop_back();

    s.push_back('1');
    rec();
    s.pop_back();
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    rec();
}