// From [1:23:00] of this Lecture-2
// (But Firstly Complete your code.)

// E. Arranging The Sheep
// https://codeforces.com/problemset/problem/1520/E



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
        // I/P
        int n; cin >> n;
        string s; cin >> s;

        // Solution
        vector<int> position;
        for(int i=0; i<n; i++){
            if(s[i] == '*'){
                position.push_back(i+1);
            }
        }

        int ans;
        int Pos_Size = position.size();
        if(Pos_Size%2 != 0){ // odd
            int mid = position[Pos_Size/2];

            int Plus_minus = Pos_Size/2;
            for(int i=0; i < Pos_Size; i++){

            }
        }
        else{ // even

        }
    }
}