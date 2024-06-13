#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    string s; cin >> s;

    // Precompute
    int Hash[256] = {0};  // Total 256 characters.
    for(int i=0; i < s.size(); i++){
        Hash[s[i]]++;
    }

    int q; cin >> q;
    while(q--){
        char c; cin >> c;

        // fetch
        cout << Hash[c] << endl;
    }

    return 0;
}